#include "lists.h"

/**
 * print_listint_safe - prints the circular linked list
 * @head: pointer to the head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *temp = (listint_t *)head;

	while (temp && temp > temp->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
	}

	return (i);
}
