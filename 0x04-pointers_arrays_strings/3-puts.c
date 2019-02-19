#include "holberton.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
