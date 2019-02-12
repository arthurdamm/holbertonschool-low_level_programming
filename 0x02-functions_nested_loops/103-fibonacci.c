#include "holberton.h"
#include <stdio.h>

/**
 * main - calls fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci_sum();
	return (0);
}

/**
 * fibonacci_sum - print first 100 fibonacci numbers
 *
 * Return: void
 */
void fibonacci_sum(void)
{
	unsigned long a, b, c, s;

	for (s = 0, a = 1, b = 2; a < 4000000;)
	{
		if (!(a % 2))
			s += a;
		c = a;
		a = b;
		b += c;
	}
	printf("%lu\n", s);
}
