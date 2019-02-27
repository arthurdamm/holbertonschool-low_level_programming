#include "holberton.h"
#include <stddef.h>

/**
 * factorial - returns factorial of given number
 * @n: the number to factorial
 *
 * Return: the integer result, -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
