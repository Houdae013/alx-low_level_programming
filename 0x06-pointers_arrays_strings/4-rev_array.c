#include "main.h"

/**
 * reverse_array- reverses the content of an arrayof integers
 * @a: int
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i, p;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		p = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = p;
	}
}
