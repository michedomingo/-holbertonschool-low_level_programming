#include "holberton.h"

/**
 * free_grid - free a 2d grid previously allocated by alloc_grid
 * @grid: double pointer to 2d array
 * @height: height of int type grid
 * Return: memory freed up
 */

void free_grid(int **grid, int height)
{
	int f;

	if (grid == NULL || grid == 0)
		return;

	for (f = 0; f < height; f++)
		free(grid[f]);

	free(grid);
}
