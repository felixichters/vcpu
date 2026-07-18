#include "utils.h"

int mod_wrap(int x, int y)
{
	return ((x % y) + y) % y;
}
