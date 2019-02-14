#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (j = 0; j < i + 1; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
