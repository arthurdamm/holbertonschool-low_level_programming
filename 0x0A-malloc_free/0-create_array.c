#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - allocates a char array and fills with byte
 * @size: the size of the char array
 * @c: the default byte filling
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (!size || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
