#include "holberton.h"

#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"

/**
 * member - tests if a string contains a character
 * @c: the character
 * @s: the string
 *
 * Return: 1 if found, 0 otherwise
 */
int leetreplace(char c, char *s)
{
	for (; *s; s++)
		if (*s == c)
			return (1);
	return (0);
}

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: char pointer
 */
char *leet(char *s)
{
	char *ret = s, *leetin = LEETIN, *leetout = LEETOUT;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; leetin[i]; i++)
			if (*s == leetin[i])
				*s = leetout[i];
	}
	return (ret);
}
