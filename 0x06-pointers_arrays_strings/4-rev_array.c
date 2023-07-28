#include "main.h"

/**
 * reverse_array- reverses the content of an arrayof integers
 * @a: int
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i, p;
	int *end = a[n - 1];
	int *start = a;

	for (i = 0; i < n / 2; i++)
	{
		p = *end;
		*end = a[i];
		*start = p;
	}
}

