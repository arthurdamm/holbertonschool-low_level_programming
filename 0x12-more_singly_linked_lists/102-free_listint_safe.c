#include "lists.h"

/**
 * free_listint_safe - prints a list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *head, *temp;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		c++;
		if (head <= head->next)
		{
			break;
		}
		temp = head;
		head = head->next;
		free(temp);
	}
	return (c);
}
