#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two given nodes
 */
_Bool is_descendant(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (!first || !second)
		return (false);
	if (first->left == second || first->right == second)
		return (true);
	return (is_descendant(first->left, second) ||
			is_descendant(first->right, second));
}


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two given nodes
 */
const binary_tree_t *_binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first)
		return (NULL);
	if (is_descendant(first, second))
		return (first);
	return (_binary_trees_ancestor(first->parent, second));
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (is_descendant(first, second))
		return ((binary_tree_t *)first);
	else if (is_descendant(second, first))
		return ((binary_tree_t *)second);
	return ((binary_tree_t *)_binary_trees_ancestor(first->parent, second));
}
