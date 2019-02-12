#include "holberton.h"

/**
 * print_times_table - prints the times-table from 0 to n
 * @n: an integer from 0 to 15 inclusive
 *
 * Returns: void
 */
void print_times_table(int n)
{
	int i, j, k, h, t, o;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			h = k / 100;
			t = (k % 100) / 10;
			o = k % 10;
			if (h)
				_putchar(h + '0');
			else if (j)
				_putchar(' ');
			if (t)
				_putchar(t + '0');
			else if (h)
				_putchar('0');
			else if (j)
				_putchar(' ');
			_putchar(o + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
