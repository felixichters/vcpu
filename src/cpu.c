#include "cpu.h"

struct cpu cpu_create(void)
{
	struct cpu c = {0};
	return c;
}

void fde(struct cpu *c, struct memory *m)
{
	uint8_t op = fetch(c, m);
	struct op_d = decode(op);
	execute();
	c->ip = c->ip + 1;
}

uint8_t fetch(struct cpu *c, struct memory *m)
{
	return mem_read(m, (int)c->ip);
}
