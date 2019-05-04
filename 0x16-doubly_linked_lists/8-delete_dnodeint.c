#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: address of pointer to current head node
 * @index: the index to at which to insert
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;

	if (!head)
		return (-1);
	node = *head;
	if (!index)
	{
		if (!node)
			return (-1);
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	for (; node; node = node->next, index--)
	{
		if (index - 1 == 0)
		{
			temp = node->next;
			if (!temp)
				break;
			node->next = temp->next;
			if (temp->next)
				temp->next->prev = node;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
