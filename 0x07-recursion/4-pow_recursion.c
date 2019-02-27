#include "holberton.h"
#include <stddef.h>

/**
 * _pow_recursion - returns the x to the power y
 * @x: the base
 * @y: the exponent
 *
 * Return: the integer result, -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
