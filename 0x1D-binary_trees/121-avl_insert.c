#include "binary_trees.h"

/**
 * avl_insert - inserts a value in an AVL Tree
 * @tree: double pointer to root of tree
 * @value: input value
 * Return: pointer to the created node, or NULL on failure
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *av, *node;

	if (!tree)
		return (NULL);
	av = calloc(1, sizeof(avl_t));
	if (!av)
		return (NULL);
	av->n = value;
	if (!*tree)
	{
		*tree = av;
		return (av);
	}
	node = *tree;
	while (node)
	{
		if (value == node->n)
			return (NULL);
		if (value < node->n)
		{
			if (!node->left)
			{
				av->parent = node;
				node->left = av;
				return (rebalance(node->left, tree));
			}
			node = node->left;
		} else
		{
			if (!node->right)
			{
				av->parent = node;
				node->right = av;
				return (rebalance(node->right, tree));
			}
			node = node->right;
		}
	}
	return (NULL);
}
