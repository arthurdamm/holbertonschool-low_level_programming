#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}

	}
	return (0);
}
