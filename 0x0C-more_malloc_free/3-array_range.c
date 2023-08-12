#include "main.h"

/**
 * *array_range- create an array of integers containing values from min to max
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the nely created array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
