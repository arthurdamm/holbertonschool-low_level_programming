#include "holberton.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a string followed by newline recursively
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
