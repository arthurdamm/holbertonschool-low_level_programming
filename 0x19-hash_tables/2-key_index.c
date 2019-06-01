#include "hash_tables.h"

/**
 * key_index - gives hash index of a key
 * @key: the string key
 * @size: the size of the hash array
 *
 * Return: hashed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);
	return (hash_djb2(key) % size);
}
