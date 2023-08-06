#include "main.h"

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i, j = size;
	int sum1 = 0;
	int sum2 = 0;

	while (j > 0)
	{
		for (i = 0; i < size; i++)
		{
			sum1 = sum1 + a[i][i];
			sum2 = sum2 + a[i][j];
			j--;
		}
	}
	printf("%d, %d/n", sum1, sum2);
}
