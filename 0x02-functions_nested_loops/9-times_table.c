#include "holberton.h"

/**
 * times_table - prints the times-table 0 to 9
 *
 * Returns: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k / 10)
				_putchar(k / 10 + '0');
			else if (j > 0)
				_putchar(' ');
			_putchar(k % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

