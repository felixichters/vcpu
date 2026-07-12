#ifndef ISA_H
#define ISA_H

#include <stdint.h>
#include "cpu.h"

enum {
	NOP,
	INA,
	INX,
	INY,
	NUM_OPCODES,
};

extern void (*isa[NUM_OPCODES])(struct cpu*, struct memory*);

void (*decode(uint8_t op))(struct cpu*, struct memory*);

void execute(struct cpu *c, struct memory *m, 
             void (*exec)(struct cpu*, struct memory*));

void exec_nop(struct cpu *c, struct memory *m);
void exec_ina(struct cpu *c, struct memory *m);
void exec_inx(struct cpu *c, struct memory *m);
void exec_iny(struct cpu *c, struct memory *m);

#endif
