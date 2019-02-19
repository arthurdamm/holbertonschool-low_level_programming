#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, l = 0;

	while (src[l])
		l++;
	while (i < l)
		dest[i] = src[i];
	return (dest);
}
