#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates a two dimensional array
 * @width: the table width
 * @height: the table height
 *
 * Return: pointer to the table
 */
int **alloc_grid(int width, int height)
{
	int h2 = height;
	int **rows;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = malloc(sizeof(int *) * height);
	if (!rows)
		return (NULL);
	while (height--)
	{
		int *cols = malloc(sizeof(int) * width);
		int i = width;

		if (!cols)
			return (NULL);
		while (i--)
			*cols++ = 0;
		*rows++ = cols - width;
	}
	return (rows - h2);
}
