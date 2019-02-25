#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to check
 * @accept: bytes composing prefix
 *
 * Return: integer length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
