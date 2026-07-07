#include "mem.h"
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
