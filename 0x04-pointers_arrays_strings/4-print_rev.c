#include "holberton.h"

/**
 * print_rev - prints a string in reverse with newline
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 1;

	while (*s++)
		l++;
	while (l--)
		_putchar(*--s);
	_putchar('\n');
}
