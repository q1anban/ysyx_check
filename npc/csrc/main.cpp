#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vexample.h"
int main(int argc, char** argv) {

  VerilatedContext* context = new VerilatedContext;
  context->commandArgs(argc, argv);
  context->traceEverOn(true);

  VerilatedFstC* tfp = new VerilatedFstC;
  Vexample* top = new Vexample(context);

  top->trace(tfp, 99);
  tfp->open("dump.fst");

  for(int i = 0; i < 10; i++) {
    top->a = rand()&1;
    top->b = rand()&1;
    top->eval();
    context->timeInc(1);
    tfp->dump(context->time());
    printf("a: %d, b: %d, c: %d\n", top->a, top->b, top->c);
  }
  tfp->close();

  delete top;
  delete tfp;
  delete context;
  printf("Hello, ysyx!\n");
  return 0;
}
