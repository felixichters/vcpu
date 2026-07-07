#ifndef MEM_H
#define MEM_H

#include <stddef.h>
#include <stdint.h>

struct memory {
	uint8_t *data;
	size_t size;
};

struct memory mem_create(size_t size);
void mem_destroy(struct memory *m);

uint8_t mem_read(struct memory *m, int addr);
void mem_write(struct memory *m, int addr, uint8_t val);

#endif
