#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates grid
 * @width: int parameter
 * @height: int parameter
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **grid;

	if (width < 1 || height < 1)
		return (0);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (0);
	}
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);
		if (grid[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(grid[k]);
			}
			free(grid);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
