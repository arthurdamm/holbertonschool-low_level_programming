#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of list
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (!head || !(head->next))
		return (NULL);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		/* tortoise and hare have met */
		{
			/* reset tortoise to head */
			tortoise = head;
			while (tortoise != hare)
			{
				/* increment both by one node at a time */
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* return node where the circular list began */
			return (hare);
		}
		/* tortoise travels 1 node at a time */
		tortoise = tortoise->next;
		/* hare travels 2 nodes at a time */
		hare = (hare->next)->next;
	}
	return (NULL);
}
