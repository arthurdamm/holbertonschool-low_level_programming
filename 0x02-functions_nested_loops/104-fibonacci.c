#include "holberton.h"
#include <stdio.h>

/**
 * main - calls fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci_print_98();
	return (0);
}

/**
 * fibonacci_print_98 - print first 98 fibonacci numbers
 *
 * Return: void
 */
void fibonacci_print_98(void)
{
	unsigned long i, a1, a2, b1, b2, c1, c2, m, r;

	m = 1000000000000000000;
	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;
	for (i = 0; i < 98; i++)
	{
		if (a1)
			printf("%lu", a1);
		printf("%lu", a2);
		if (i < 97)
			printf(", ");
		c1 = a1;
		c2 = a2;
		a1 = b1;
		a2 = b2;
		b1 += c1;
		b2 += c2;
		r = b2 / m;
		b2 %= m;
		b1 += r;
	}
	printf("\n");
}
