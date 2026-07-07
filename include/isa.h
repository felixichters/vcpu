#ifndef ISA_H
#define ISA_H

#include <stdint.h>
#include "cpu.h"

enum {
	NOP,
	ASL,
};

struct opcode {
	uint8_t op;
	void (*handle)(struct cpu*);
};

extern struct opcode isa[];

void decode(uint8_t op);
void execute(struct cpu *c, struct opcode *instr);

void exec_nop(struct cpu *s);

#endif
