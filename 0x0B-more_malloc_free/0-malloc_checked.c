#include "holberton.h"
#include "stdlib.h"

/**
 * malloc_checked - calls exit on failure
 * @b: number of bytes to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
