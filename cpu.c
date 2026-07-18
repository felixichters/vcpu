#include "cpu.h"
#include "isa.h"

struct cpu cpu_create(void)
{
	struct cpu c = {0};
	return c;
}

void fde(struct cpu *c, struct memory *m)
{
	uint8_t op = fetch(c, m);
	void (*e)(struct cpu*, struct memory*) = decode(op);
	execute(c, m, e);
	c->ip = c->ip + 1;
}

uint8_t fetch(struct cpu *c, struct memory *m)
{
	return mem_read(m, (int)c->ip);
}
