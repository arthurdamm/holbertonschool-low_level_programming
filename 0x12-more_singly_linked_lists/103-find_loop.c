#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to first node
 *
 * Return: address of looping node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	if (!head)
		return (NULL);
	tort = hare = head;
	while (hare->next && hare->next->next)
	{
		hare = hare->next->next;
		tort = tort->next;
		if (hare == tort)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
