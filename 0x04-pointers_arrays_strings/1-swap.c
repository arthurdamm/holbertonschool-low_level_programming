#include "holberton.h"

/**
 * swap_int - swaps the values of a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	if (a != b)
	{
		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
	}
}
