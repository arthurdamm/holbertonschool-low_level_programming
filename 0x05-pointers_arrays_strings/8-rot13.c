#include "holberton.h"

#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

/**
 * rot13 - encodes a string in rot13
 * @s: the string to encode
 *
 * Return: char pointer
 */
char *rot13(char *s)
{
	char *ret = s, *rot13in = ROT13IN, *rot13out = ROT13OUT;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; rot13in[i]; i++)
			if (*s == rot13in[i])
			{
				*s = rot13out[i];
				break;
			}
	}
	return (ret);
}
