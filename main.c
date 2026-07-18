#include "mem.h"
#include "cpu.h"
#include "isa.h"

int main (void)
{
	struct cpu c = cpu_create();
	struct memory m = mem_create(80);
	
	mem_write(&m, 0, NOP);
	mem_write(&m, 1, INA);
	mem_write(&m, 2, INX);
	mem_write(&m, 3, INY);

	while(c.ip < 5)
	{
		fde(&c, &m);
	}
	return 0;
}
