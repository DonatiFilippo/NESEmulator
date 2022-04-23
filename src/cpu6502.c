#include "cpu6502.h"

void init_cpu(cpu_t* cpu) {
    cpu -> a =  00000000;
    cpu -> x =  00000000;
    cpu -> y =  00000000;
    cpu -> p =  00000000;
    cpu -> pc = 00000000;
    cpu -> sp = 0000000000000000;
}

void cpu_cycle(cpu_t* cpu) {

}

//Section on OP codes