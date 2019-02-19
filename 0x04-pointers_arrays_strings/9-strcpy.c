#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i++)
	{
		dest[i] = src[i];
	}
	else if(src[0] == 0)
		dest[0] = src[0];
	return (dest);
}
