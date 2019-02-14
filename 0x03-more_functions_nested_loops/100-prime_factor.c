#include "holberton.h"
#include <stdio.h>
#include <math.h>

#define NUM 612852475143

/**
 * main - find the largest prime factor of 612852475143
 *
 * Return: 0 success
 */
int main(void)
{
	long i, p, r;

	for (p = 1, i = 2; i < NUM && p < NUM; i++)
	{
		if (!(NUM % i) && is_prime(i))
		{
			p *= i;
			r = i;
		}
	}
	printf("%ld\n", r);
	return (0);
}

/**
 * is_prime - checks if an integer is prime
 * @n: the integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i <= sqrt(n); i++)
		if (!(n % i))
			return (0);
	return (1);
}
