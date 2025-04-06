#include <nvboard.h>
#include "Vexample.h"


static TOP_NAME top;

void single_cycle() {
  top.clk = 0; top.eval();
  top.clk = 1; top.eval();
}

void reset(int n) {
  top.rst = 1;
  while (n -- > 0) single_cycle();
  top.rst = 0;
}

void nvboard_bind_all_pins(TOP_NAME* top);


int main(int argc, char** argv) {

  
  nvboard_bind_all_pins(&top);
  nvboard_init();
  reset(10);
  while (1)
  {
    /* code */
    single_cycle();
    nvboard_update();
  }
  
  
  return 0;
}
