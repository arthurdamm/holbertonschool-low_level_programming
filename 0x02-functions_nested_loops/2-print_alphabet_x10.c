#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10x characters from a to z
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}

/**
 * print_alphabet - prints characters from a to z
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
