#include "isa.h"


void (*isa[NUM_OPCODES])(struct cpu *c, struct memory *m) = {
	[NOP] = exec_nop,
	[INA] = exec_ina,
	[INX] = exec_inx,
	[INY] = exec_iny,
};

void (*decode(uint8_t op))(struct cpu*, struct memory*)
{
	return isa[op];
}

void execute(struct cpu *c, struct memory *m, 
             void (*exec)(struct cpu*, struct memory*))
{
	exec(c, m);
}

void exec_nop(struct cpu *c, struct memory *m)
{
	return;
}

void exec_ina(struct cpu *c, struct memory *m)
{
	c->a++;
}

void exec_inx(struct cpu *c, struct memory *m)
{
	c->x++;
}

void exec_iny(struct cpu *c, struct memory *m)
{
	c->y++;
}
