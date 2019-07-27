#include "binary_trees.h"

/**
 * balance_left - balances left side
 * @node: pointer to temp node
 * Return: root of tree
 */
avl_t *balance_left(avl_t *node)
{
	avl_t *z, *x, *y, *ret;

	z = node;
	y = binary_tree_balance(z) < 0 ? z->right : z->left;
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
 * rebalance - rebalance AVL tree
 * @node: pointer to node to rebalance
 * @tree: double pointer to root of tree
 * Return: pointer to input node
 */
avl_t *rebalance(avl_t *node, avl_t **tree)
{
	avl_t *tmp, *root, *z, *x, *y, *ret;
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
			z = tmp;
			y = binary_tree_balance(z) < 0 ? z->right : z->left;
			if (!y)
				return (NULL);
			x = binary_tree_balance(y) < 0 ? y->right : y->left;
			if (!x)
				return (NULL);
			if (x == y->left)
			{
				ret = binary_tree_rotate_left(z);
				*tree = ret;
				return (ret);
			}
			binary_tree_rotate_right(y);
			root = binary_tree_rotate_left(z);
			if (root)
				*tree = root;
		}
		tmp = tmp->parent;
	}
	return (node);
}

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

/**
 * replace - swaps two nodes in binary tree
 * @node: first node
 * @new: second node
 * @far_left: true if far-left successor
 * Return: pointer to root
 */
bst_t *replace(bst_t *node, bst_t *new, int far_left)
{
	bst_t *temp = NULL, *balance = NULL;
	_Bool left_child = false;

	if (node->parent)
		left_child = node->parent->left == node;
	balance = new->parent != node ? new->parent : new;
	if (new->parent && new->parent != node)
	{
		if (far_left && new->right)
		{
			new->right->parent = new->parent;
			new->parent->left = new->right;
		}
		else
			new->parent->left = NULL;
	}
	new->parent = node->parent;
	if (node->parent)
	{
		if (left_child)
			node->parent->left = new;
		else
			node->parent->right = new;
	}
	if (node->left && node->left != new)
	{
		new->left = node->left;
		node->left->parent = new;
	}
	if (node->right && node->right != new)
	{
		new->right = node->right;
		node->right->parent = new;
	}
	temp = new;
	while (temp->parent)
		temp = temp->parent;
	rebalance(balance, &temp);
	free(node);
	return (temp);
}

/**
 * avl_remove - removes a node from an AVL tree
 * @root: pointer to root of tree
 * @value: value to be removed
 * Return: pointer to the new root node of the tree after removing the desired
 * value, and after rebalancing
 */
avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *node, *temp;
	_Bool left_child = false;

	if (!root)
		return (NULL);
	node = bst_search(root, value);
	if (!node)
		return (root);
	if (node->parent)
		left_child = node->parent->left == node;
	if (!node->right && !node->left)
	{
		if (!node->parent)
		{
			free(node);
			return (NULL);
		}
		if (left_child)
			node->parent->left = NULL;
		else
			node->parent->right = NULL;
		root = temp = node->parent;
		while (root->parent)
			root = root->parent;
		free(node);
		rebalance(temp, &root);
		return (root);

	}
	if (!node->right)
		return (replace(node, node->left, 0));
	temp = node->right;
	while (temp->left)
		temp = temp->left;
	return (replace(node, temp, 1));
}
