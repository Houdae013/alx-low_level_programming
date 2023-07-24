#include "main.h"

/**
 * swap_int- swaps value
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int n = 0;

	n = *a;
	*a = *b;
	*b = n;
}
