#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a * 10 + b < 100)
	{
		if (c * 10 + d > a * 10 + b)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			if (a * 10 + b < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		d++;
		if (d > 9)
		{
			c++;
			d = 0;
		}
		if (c > 9)
		{
			b++;
			c = 0;
		}
		if (b > 9)
		{
			a++;
			b = 0;
		}
	}
	putchar('\n');
	return (0);
}
