#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next && head < head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (c);
		}
		c++;
		head = head->next;
	}
	return (c);
}
