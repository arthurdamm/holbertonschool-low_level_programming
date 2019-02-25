#include "holberton.h"

/**
 * _memcpy - copies bytes from src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
