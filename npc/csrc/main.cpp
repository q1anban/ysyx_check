#include <iostream>
#include <fstream>
#include <vector>
#include "Vnpc.h"       
#include "verilated.h"  
#include "Vnpc___024root.h"
#include "Vnpc_npc.h"
#include "Vnpc_regfile.h"

// --- Constants for Configuration ---
// Memory layout
const uint32_t MEM_BASE   = 0x80000000; 
const uint32_t MEM_SIZE   = 0x8000000; 
// Simulation control
const int      SIM_TIMEOUT_CYCLES = 10000;
const int      EXIT_CODE_REG      = 10; // a0 is x10

// Global state
uint8_t memory[MEM_SIZE];
Vnpc* top;

extern "C" void sim_ebreak() {
    Verilated::gotFinish(true);
}

extern "C" void sim_inv() {
    std::cerr << "Invalid instruction encountered." << std::endl;

}


long long load_image(const char* image_path) {
    if (!image_path) {
        std::cerr << "Error: No image file provided. Using default behavior." << std::endl;
        return -1;
    }

    std::ifstream file(image_path, std::ios::binary);
    if (!file) {
        std::cerr << "Error: Cannot open image file: " << image_path << std::endl;
        return -1;
    }

    file.seekg(0, std::ios::end);
    long long size = file.tellg();
    file.seekg(0, std::ios::beg);

    if (size > MEM_SIZE) {
        std::cerr << "Error: Image file is too large for memory." << std::endl;
        file.close();
        return -1;
    }

    file.read(reinterpret_cast<char*>(memory), size);
    file.close();
    
    std::cout << "Image '" << image_path << "' loaded, size = " << size << " bytes." << std::endl;
    return size;
}

void exec_once() {
    uint32_t pc = top->pc;
    if ((pc & 0x3) != 0) {
        std::cerr << "PC alignment error: " << std::hex << pc << std::dec << std::endl;
        Verilated::gotFinish(true);
        return;
    }
    top->inst = *reinterpret_cast<uint32_t*>(&memory[pc - MEM_BASE]);

    top->eval();


    if (top->we) {
        const uint32_t waddr = top->waddr;
        if (waddr >= MEM_BASE && waddr < (MEM_BASE + MEM_SIZE)) {
            int32_t mask = 0;
            if (top->we & 0b0001) mask |= 0x000000FF;
            if (top->we & 0b0010) mask |= 0x0000FF00;
            if (top->we & 0b0100) mask |= 0x00FF0000;
            if (top->we & 0b1000) mask |= 0xFF000000;

            uint32_t* p = reinterpret_cast<uint32_t*>(&memory[waddr - MEM_BASE]);
            *p = (*p & ~mask) | (top->wdata & mask);
        }
    }


    const uint32_t raddr = top->raddr;
    if (raddr >= MEM_BASE && raddr < (MEM_BASE + MEM_SIZE)) {
        top->rdata = *reinterpret_cast<uint32_t*>(&memory[raddr - MEM_BASE]);
    } else {
        top->rdata = 0; 
    }
    

    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
}


int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    if (load_image(argc > 1 ? argv[1] : nullptr) < 0) {
        return 1;
    }

    top = new Vnpc;


    std::cout << "Starting reset..." << std::endl;
    top->rst = 1;
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval(); 
    top->rst = 0;
    std::cout << "Reset finished. Simulation started." << std::endl;


    for (int time = 0; time < SIM_TIMEOUT_CYCLES && !Verilated::gotFinish(); ++time) {
        exec_once();
    }

    // Cleanup and exit
    uint32_t exit_code = top->rootp->npc->u_regfile->regs[EXIT_CODE_REG];

    top->final();
    delete top;

    std::cout << "Simulation finished." << std::endl;
    return exit_code;
}

