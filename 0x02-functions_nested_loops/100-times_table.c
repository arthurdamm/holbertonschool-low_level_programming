#include "holberton.h"

/**
* print_times_table - print a times table with only putchar
* @n: passed in number to act as table size
*
* Return: void
*/

void print_times_table(int n)
{
	int x;
	int y;
	int prod;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			_putchar ('0');
			for (x = 1; x <= n; x++)
			{
				prod = x * y;
				_putchar(',');
				_putchar(' ');
				if (prod > 99)
					_putchar(prod / 100 + '0');
				else
					_putchar(' ');
				if (prod > 9)
					_putchar((prod / 10)  % 10 + '0');
				else
					_putchar(' ');
				_putchar(prod % 10 + '0');
				if (x == n)
				_putchar('\n');
			}
		}
	}
}

