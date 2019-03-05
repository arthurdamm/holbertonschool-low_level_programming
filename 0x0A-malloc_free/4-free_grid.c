#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free an a previously allocated grid
 * @grid: pointer to grid
 * @height: the grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (!grid || height <= 0)
		return;
	while (height--)
		if (grid[height])
			free(grid[height]);
	free(grid);
}
