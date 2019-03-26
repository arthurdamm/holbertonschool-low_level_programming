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
	long diff;

	while (head)
	{
		c++;
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff < 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (c);
}
