#include "cpu.h"

struct cpu cpu_create(void)
{
	struct cpu c = {0};
	return c;
}

void fde(struct cpu *c)
{
	uint8_t op = fetch(c);
}

uint8_t fetch(struct cpu *c)
{

}
