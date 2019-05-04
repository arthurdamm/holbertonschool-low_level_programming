#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: address of pointer to current head node
 * @idx: the index to at which to insert
 * @n: the value of the inserted node
 *
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!h || !new)
		return (new ? free(new), NULL : NULL);
	node = *h;
	new->n = n;
	if (!idx)
	{
		new->prev = NULL;
		new->next = node ? node : NULL;
		if (node)
			node->prev = new;
		return (*h = new);
	}
	for (; node; node = node->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new->prev = node;
			new->next = node->next;
			if (new->next)
				new->next->prev = new;
			node->next = new;
			return (new);
		}
	}
	return (free(new), NULL);
}
