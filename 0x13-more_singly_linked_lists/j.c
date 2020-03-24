#include "lists.h"

/**
 * switcheroo - Switch next pointers of list nodes
 * @node: Current node
 * @next: Previous node relative to current node in non-reversed list
 *
 * Return: New head of list
 */

listint_t *switcheroo(listint_t *node, listint_t *next)
{
	listint_t *next_hold;

	if (!node->next)
	{
		node->next = next;
		return (node);
	}

	next_hold = node->next;
	node->next = next;

	return (switcheroo(next_hold, node));
}

/**
 * reverse_listint - Reverse list
 * @head: Address of list head
 *
 * Return: Head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_hold;

	if (!head || !*head)
		return (NULL);

	next_hold = (*head)->next;
	(*head)->next = NULL;
	*head = switcheroo(next_hold, *head);

	return (*head);
}
