#include "holberton.h"

#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

/**
 * print_number - using only _putchar
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i, p;

	if (n < 0)
		_putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = (n / i) % 10;

		d = d < 0 ? -d : d;
		if (d || p || i == 1)
		{
			_putchar(d + '0');
			p++;
		}

	}
}
