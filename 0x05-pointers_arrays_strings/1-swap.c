#include "main.h"
/**
 * swap_int - Function that swaps two integers a and b
 * @a: swaps to b
 * @b: swaps to a
 * c - the temporary swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
