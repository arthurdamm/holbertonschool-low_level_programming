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
 * rebalance - rebalance AVL tree
 * @node: pointer to node to rebalance
 * @tree: double pointer to root of tree
 * Return: pointer to input node
 */
avl_t *rebalance(avl_t *node, avl_t **tree)
{
	avl_t *tmp, *root, *z, *x, *y, *ret = NULL;
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
			y = z->right;
			if (y)
			{
				x = binary_tree_balance(y) < 0 ? y->right : y->left;
				if (x)
				{
					if (x == y->right)
					{
						ret = binary_tree_rotate_left(z);
					} else
					{
						binary_tree_rotate_right(y);
						ret = binary_tree_rotate_left(z);
					}
				}
			}
			if (ret)
				*tree = ret;
		}
		tmp = tmp->parent;
	}
	return (node);
}

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
		return (*tree = av);
	}
	node = *tree;
	while (node)
	{
		if (value == node->n)
			return (free(av), NULL);
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
	return (free(av), NULL);
}
