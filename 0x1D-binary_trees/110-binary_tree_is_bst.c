#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst - helper func for binary_tree_is_bst
 * @tree: pointer to tree node
 * @min: minimum value of BST tree
 * @max: maximum value of BST tree
 * Return: true or false
 */
_Bool is_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (true);
	if (tree->n < min || tree->n > max)
		return (false);
	return (is_bst(tree->left, min, tree->n - 1) &&
		is_bst(tree->right, tree->n + 1, max));
}


/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to root of tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
