#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to find
 *
 * Return: pointer to first matching byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
