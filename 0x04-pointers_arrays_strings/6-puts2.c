#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l]; l++)
		;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
