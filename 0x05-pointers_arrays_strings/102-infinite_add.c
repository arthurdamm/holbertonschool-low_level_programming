#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
char *rev_string(char *s)
{
	int l = _strlen(s), i = 0;
	char t;

	for (i = 0; i < l / 2; i++)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
	}
	return (s);
}

/**
 * infinite_add - adds arbitrarily long string of digits
 * @n1: the first digit string
 * @n2: the second digit string
 * @r: the result buffer
 * @size_r: the size of result buffer
 *
 * Return: char pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), i = 0, a, b, c = 0;

	for (l1--, l2--, size_r--; l1 >= 0 || l2 >= 0 || c; l1--, l2--, i++)
	{
		if (i >= size_r)
			return (0);
		a = 0;
		b = 0;
		if (l1 >= 0)
			a = n1[l1] - '0';
		if (l2 >= 0)
			b = n2[l2] - '0';
		a = a + b + c;
		c = a / 10;
		a %= 10;
		r[i] = a + '0';
	}
	r[i] = '\0';
	return (rev_string(r));
}
