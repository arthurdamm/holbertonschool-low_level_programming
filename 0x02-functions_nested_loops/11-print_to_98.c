#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints naturals from the a starting number to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int d = 0;

	if (n > 98)
		d = -1;
	else if (n < 98)
		d = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += d;
	}
	printf("%d\n", n);
}
