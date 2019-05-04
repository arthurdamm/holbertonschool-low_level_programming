#include "lists.h"

/**
 * dlistint_len - returns length of dlist
 * @h: address of head node
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
