#ifndef ISA_H
#define ISA_H

#include "cpu.h"

enum {
	NOP,
	ASL,
};

struct opcode {
	int op;
	void (*handle)(struct cpu*);
};

extern struct opcode isa[];

void exec_nop(struct cpu *s);

#endif
