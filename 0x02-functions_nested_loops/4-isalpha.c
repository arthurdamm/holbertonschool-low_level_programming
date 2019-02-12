#include "holberton.h"

/**
 * _isalpha - checks if character is a letter
 * @c: the character to test
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
