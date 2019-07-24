#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->parent = parent;
	bt->n = value;
	return (bt);
}
