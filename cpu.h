#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include "mem.h"

struct cpu {
	uint8_t a;
	uint8_t x, y;
	char fl;
	char sp;
	uint8_t st[10];
	uint8_t ip;
};

struct cpu cpu_create(void);

void fde(struct cpu *c, struct memory *m);

uint8_t fetch(struct cpu *c, struct memory *m);

#endif
