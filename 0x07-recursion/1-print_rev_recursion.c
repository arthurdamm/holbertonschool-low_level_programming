#include "holberton.h"
#include <stddef.h>

/**
 * _print_rev_recursion - prints a string in reverse, recursively
 * @s: the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
