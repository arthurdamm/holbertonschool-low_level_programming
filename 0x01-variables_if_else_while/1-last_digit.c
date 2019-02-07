#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	printf("Last digit of %d is %d and is ", n, d);
	if (d > 5)
		printf("greater than 5\n");
	else if (d == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
