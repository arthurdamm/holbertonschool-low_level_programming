#include "holberton.h"

/**
 * wildcmp - compares two strings lexicographically
 * @s1: the first string
 * @s2: the second string, can contain wildcard
 *
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
		s2++;
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		while (*++s1)
			if (*s1 == *s2)
				ret += wildcmp(s1 + 1, s2 + 1);
		return (!!ret);
	}
	return (0);
}
