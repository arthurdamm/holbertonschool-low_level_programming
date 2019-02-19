#include "holberton.h"

/**
 * _isdigit - checks if character is a digit
 * @s: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _atoi - converts string to integer
 * @s: the string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i = 0, neg = 0, d;
	int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (_isdigit(s[i]))
		{
			while (_isdigit(s[i]))
			{
				d = (s[i] - '0');
				d = neg % 2 ? -d : d;
				num = num * 10 + d;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}
