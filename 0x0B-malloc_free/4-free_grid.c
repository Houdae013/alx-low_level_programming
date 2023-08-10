#include "main.h"

/**
 * free_grid- frees a 2 dimensianal grid previously created
 * @grid: int
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int i = 0, j;

	for (j = 0; j < height; j++)
	{
		while (grid[i] != 0)
		{
			free(grid[j][i]);
		}
	}
}

