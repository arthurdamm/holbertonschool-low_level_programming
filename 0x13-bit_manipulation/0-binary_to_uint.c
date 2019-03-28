#include "holberton.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
	const char *p = b;
	unsigned int num = 0, bit = 1;

	if (!b || !*b)
		return (0);
	while (*p)
	{
		if (*p != '0' && *p != '1')
			return (0);
		p++;
	}
	p--;
	while (p >= b)
	{
		if (*p-- == '1')
			num ^= bit;
		bit <<= 1;
	}
	return (num);
}
