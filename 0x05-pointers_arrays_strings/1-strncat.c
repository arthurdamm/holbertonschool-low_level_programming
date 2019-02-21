#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy, at most
 *
 * Return: pointer to destination buffer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
