#include "main.h"

/**
 * **alloc_grid- returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: NULL on failure or If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		p[i] =(int *) malloc(width * sizeof(int));
	if (p[i] == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
