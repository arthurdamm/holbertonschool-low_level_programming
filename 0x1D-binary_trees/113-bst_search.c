#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to root of tree
 * @value: input value
 * Return: pointer to the node containing a value equals to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		tree = value < tree->n ? tree->left
							   : tree->right;
	}
	return ((bst_t *)tree);
}
