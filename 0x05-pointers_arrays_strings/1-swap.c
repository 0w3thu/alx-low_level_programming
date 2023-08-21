#include "main.h"

/**
 * function swaps vaules of two pointers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
