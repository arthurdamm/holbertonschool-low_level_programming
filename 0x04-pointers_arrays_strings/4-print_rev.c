#include "holberton.h"

/**
 * print_rev - prints a string in reverse with newline
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
