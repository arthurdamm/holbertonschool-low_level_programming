#include "holberton.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
