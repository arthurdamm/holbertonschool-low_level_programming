#include "holberton.h"

/**
 * print_line - print a line n characters long
 * @n: the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
