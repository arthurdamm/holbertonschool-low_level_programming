#include "holberton.h"

/**
 * print_last_digit - prints the last digit of the integer passed
 * @n: the integer whose last digit to print
 *
 * Return: positive integer value of the last digit
 */
int print_last_digit(int n)
{
	int d = _abs(n) % 10;

	_putchar(d + '0');
	return (d);
}
