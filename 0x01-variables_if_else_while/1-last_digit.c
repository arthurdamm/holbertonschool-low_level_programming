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

	printf("The last digit of %d is %d and is ", n, d);
	if (d > 5)
		printf("greater than 5\n");
	else if (d == 0)
		printf("is zero\n");
	else
		printf("is less than 6\n");
	return (0);
}
