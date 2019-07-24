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

/**
 * balance_left - balances left side
 * @node: pointer to temp node
 * Return: root of tree
 */
avl_t *balance_left(avl_t *node)
{
	avl_t *z, *x, *y, *ret;

	z = node;
	y = z->left;
	if (!y)
		return (NULL);
	x = binary_tree_balance(y) < 0 ? y->right : y->left;
	if (!x)
		return (NULL);
	if (x == y->left)
	{
		ret = binary_tree_rotate_right(z);
		return (ret);
	}
	binary_tree_rotate_left(y);
	ret = binary_tree_rotate_right(z);
	return (ret);
}

/**
 * balance_right - balances right side
 * @node: pointer to temp node
 * Return: root of tree
 */
avl_t *balance_right(avl_t *node)
{
	avl_t *z, *x, *y, *ret;

	z = node;
	y = z->right;
	if (!y)
		return (NULL);
	x = binary_tree_balance(y) < 0 ? y->right : y->left;
	if (!x)
		return (NULL);
	if (x == y->right)
	{
		ret = binary_tree_rotate_left(z);
		return (ret);
	}
	binary_tree_rotate_right(y);
	ret = binary_tree_rotate_left(z);
	return (ret);
}

/**
 * rebalance - rebalance AVL tree
 * @node: pointer to node to rebalance
 * @tree: double pointer to root of tree
 * Return: pointer to input node
 */
avl_t *rebalance(avl_t *node, avl_t **tree)
{
	avl_t *tmp, *root;
	int bal;

	tmp = node;
	while (tmp)
	{
		bal = binary_tree_balance(tmp);
		if (bal > 1)
		{
			root = balance_left(tmp);
			if (root)
				*tree = root;
		}
		else if (bal < -1)
		{
			root = balance_right(tmp);
			if (root)
				*tree = root;
		}
		tmp = tmp->parent;
	}
	return (node);
}
