#include "mem.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

struct memory mem_create(size_t size)
{
	struct memory m;
	m.data = calloc(size, 1);
	if (m.data == NULL) {
		fprintf(stderr, "mem_create: out of memory\n");
		exit(1);
	}
	m.size = size;
	return m;
}

void mem_destroy(struct memory *m)
{
	free(m->data);
	m->data = NULL;
	m->size = 0;
}

uint8_t mem_read(struct memory *m, int addr)
{
	addr = mod_wrap(addr, (int)m->size);
	return m->data[addr];
}

void mem_write(struct memory *m, int addr, uint8_t val)
{
	addr = mod_wrap(addr, (int)m->size);
	m->data[addr] = val;
}
