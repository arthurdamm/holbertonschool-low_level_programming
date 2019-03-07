#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: copy first n bytes of s2
 *
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *r;
	unsigned int l1 = _strlen(s1), l2 = _strlen(s2);

	l2 = l2 > n ? n : l2;
	r = s = malloc(l1 + l2 + 1);
	if (!s)
		return (NULL);
	while (*s1)
		*s++ = *s1++;
	while (l2--)
		*s++ = *s2++;
	return (r);
}
