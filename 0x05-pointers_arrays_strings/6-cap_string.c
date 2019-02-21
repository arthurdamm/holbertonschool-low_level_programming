#include "holberton.h"

#define SEPARATORS " \t\n,;.!?\"(){}"

/**
 * member - tests if a string contains a character
 * @c: the character
 * @s: the string
 *
 * Return: 1 if found, 0 otherwise
 */
int member(char c, char *s)
{
	for (; *s; s++)
		if (*s == c)
			return (1);
	return (0);
}

/**
 * _islower - checks if c is lowercase
 * @c: the character to test case
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * cap_string - capitalizes each word of a string
 * @s: the string to capitalize
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	char *ret = s;

	if (_islower(*s))
		*s += 'A' - 'a';
	while (*++s)
		if (_islower(*s) && member(*(s - 1), SEPARATORS))
			*s += 'A' - 'a';
	return (ret);
}
