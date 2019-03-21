#include "lists.h"

/**
 * _strlen_2 - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen_2(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
			return (NULL);
		new_head->len = _strlen_2(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
