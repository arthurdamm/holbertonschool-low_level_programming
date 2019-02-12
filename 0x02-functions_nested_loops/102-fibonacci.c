#include "holberton.h"
#include <stdio.h>

/**
 * main - calls fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci();
	return (0);
}

/**
 * fibonacci - print first 100 fibonacci numbers
 *
 * Return: void
 */
void fibonacci(void)
{
	int i;
	unsigned long a, b, c;

	for (a = 1, b = 2, i = 0; i < 50; i++)
	{
		printf("%lu", a);
		if (i < 49)
			printf(", ");
		c = a;
		a = b;
		b += c;
	}
	puts("");
}
