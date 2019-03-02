#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, n, c = 0, COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);
	if (n < 0)
		return (puts("0"), 1);
	for (i = 0; i < 5; i++)
		if (n / COINS[i])
		{
			c += n / COINS[i];
			n %= COINS[i];
		}
	printf("%d\n", c);
	return (0);
}
