#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints all elements of array
 * @a: the array
 * @n: the array length
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 < n)
			printf(", ");
	}
	printf("\n");
}
