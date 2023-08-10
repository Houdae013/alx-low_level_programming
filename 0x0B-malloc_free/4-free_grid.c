#include "main.h"

/**
 * free_grid- frees a 2 dimensianal grid previously created
 * @grid: int
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
			free(grid[j]);
	free(grid);
}

