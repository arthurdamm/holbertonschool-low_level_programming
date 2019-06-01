#include "hash_tables.h"

/**
 * hash_table_print - prints the elements of a hash table
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	size_t printed = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed++;
			node = node->next;
		}
	}

	printf("}\n");
}
