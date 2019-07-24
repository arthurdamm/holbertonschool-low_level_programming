#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: input binary tree
 * Return: number of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * is_complete - helper func for binary_tree_is_complete
 * @tree: pointer to root of tree
 * @index: index of current node to be verified
 * @size: total number of nodes in tree
 * Return: 1 if true 0 if false
 */
_Bool is_complete(const binary_tree_t *tree, unsigned int index, size_t size)
{
	if (!tree)
		return (true);

	if (index >= size)
		return (false);

	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to root of tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	unsigned int i = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, i, size));
}
