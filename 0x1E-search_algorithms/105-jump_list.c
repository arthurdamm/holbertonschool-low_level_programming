#include "search_algos.h"

/**
 * jump_list - jump searches on singly linked list
 * @list: pointer to head node
 * @size: its size
 * @value: value to search for
 *
 * Return: the node found or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j = sqrt(size), k = 0;
	listint_t *last = list;

	if (!list)
		return (NULL);

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, list->n);
		i += j;
		for (last = list, k = 0; k < j; k++)
			list = list->next;
	}

	j = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	i = i >= size ? size - 1 : i;
	list = last;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", j, list->n);
		if (list->n == value)
			return (list);
		j++;
		list = list->next;
	}
	return (NULL);
}
