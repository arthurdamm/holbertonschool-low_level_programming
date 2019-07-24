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

/**
 * swap - swaps two nodes in binary tree
 * @node: first node
 * @new: second node
 * Return: pointer to root
 */
bst_t *swap(bst_t *node, bst_t *new)
{
	bst_t *temp = NULL;
	_Bool left_child = false;

	if (node->parent)
		left_child = node->parent->left == node;
	if (new->parent && new->parent != node)
		new->parent->left = NULL;
	new->parent = node->parent;
	if (node->parent)
	{
		if (left_child)
			node->parent->left = new;
		else
			node->parent->right = new;
	}
	if (node->left != new)
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
	free(node);
	return (temp);
}

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: pointer to root of tree
 * @value: input value
 * Return: pointer to the new root node of the tree after removing the
 * desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *temp;
	_Bool left_child = false;

	if (!root)
		return (NULL);
	node = bst_search(root, value);
	if (!node)
		return (NULL);
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
		temp = node->parent;
		while (temp->parent)
			temp = temp->parent;
		free(node);
		return (temp);

	}
	if (!node->right)
		return (swap(node, node->left));
	temp = node->right;
	while (temp->left)
		temp = temp->left;
	return (swap(node, temp));
}
