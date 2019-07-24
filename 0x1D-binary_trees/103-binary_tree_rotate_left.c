#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to root of tree
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *root_parent;
	_Bool root_leftchild = false;

	if (!tree)
		return (NULL);
	tmp = tree->right;
	if (tmp)
	{
		root_parent = tree->parent;
		if (root_parent)
			root_leftchild = tree->parent->left == tree;

		tree->right = tmp->left;
		if (tmp->left)
			tmp->left->parent = tree;
		tree->parent = tmp;

		tmp->left = tree;
		tmp->parent = root_parent;
		if (root_parent)
		{
			if (root_leftchild)
				root_parent->left = tmp;
			else
				root_parent->right = tmp;
		}
	}
	while (tree->parent)
		tree = tree->parent;
	return (tree);
}
