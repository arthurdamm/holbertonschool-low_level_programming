#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenaste two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	char *ret;

	while (s1 && *s1++)
		length1++;
	while (s2 && *s2++)
		length2++;
	ret = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!ret)
		return (NULL);
	ret += length1 + length2;
	*ret = '\0';
	for (s2--; length2--;)
		*--ret = *--s2;
	for (s1--; length1--;)
		*--ret = *--s1;
	return (ret);
}
