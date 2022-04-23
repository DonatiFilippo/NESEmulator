#ifndef NESEMULATOR_CPU6502_H
#define NESEMULATOR_CPU6502_H

#include <stdint.h>

typedef struct {
    uint8_t a;
    uint8_t x;
    uint8_t y;
    uint8_t p;
    uint8_t sp;
    uint32_t pc;
} cpu_t;

void init_cpu(cpu_t* cpu);

void cpu_cycle(cpu_t* cpu);

#endif //NESEMULATOR_CPU6502_H


