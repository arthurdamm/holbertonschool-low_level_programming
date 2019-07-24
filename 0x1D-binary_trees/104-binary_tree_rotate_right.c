#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to root of tree
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *root_parent;
	_Bool root_leftchild = false;

	if (!tree)
		return (NULL);
	tmp = tree->left;
	if (tmp)
	{
		root_parent = tree->parent;
		if (root_parent)
			root_leftchild = tree->parent->left == tree;

		tree->left = tmp->right;
		if (tmp->right)
			tmp->right->parent = tree;
		tree->parent = tmp;

		tmp->right = tree;
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
