#ifndef CPU_H
#define CPU_H

struct cpu {
	int ax, bx;
	int cx, dx;
	char fl;
	char sp;
	int st[10];
	int ip;
};

#endif
