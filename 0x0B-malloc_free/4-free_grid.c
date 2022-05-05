#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free previous grid
 * @grid: pointer parameter
 * @height: int parameter
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
