#include "holberton.h"
#include <stdio.h>

/**
 * main - calls natural
 *
 * Return: always 0
 */
int main(void)
{
	natural();
	return (0);
}

/**
 * natural - prints sum of all multiples of 3 & 5 less thn 1024
 *
 * Return: void
 */
void natural(void)
{
	int i, s;

	for (i = 0, s = 0; i < 1024; i++)
	{
		if (!(i % 3) || !(i % 5))
			s += i;
	}
	printf("%d\n", s);
}
