#ifndef CPU_H
#define CPU_H

#include <stdint.h>

struct cpu {
	uint8_t ax, bx;
	uint8_t cx, dx;
	char fl;
	char sp;
	uint8_t st[10];
	uint8_t ip;
};

struct cpu cpu_create(void);
void fetch(struct cpu *s);

#endif
