#include "holberton.h"

/**
 * print_last_digit - prints the last digit of the integer passed
 * @n: the integer whose last digit to print
 *
 * Return: positive integer value of the last digit
 */
int print_last_digit(int n)
{
	int d = _abs(n % 10);

	_putchar(d + '0');
	return (d);
}

/**
 * _abs - returns the absolute value of integer
 * @n: the integer to value absolutely
 *
 * Return: a positive integer or zero
 */
int _abs(int n)
{
	return (n > 0 ? n : -n);
}
