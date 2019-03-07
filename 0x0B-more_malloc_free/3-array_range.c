#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: the smallest integer
 * @max: the largest integer
 *
 * Return: int pointer to array
 */
int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (!p)
		return (NULL);
	while (n--)
		p[n] = max--;
	return (p);
}
