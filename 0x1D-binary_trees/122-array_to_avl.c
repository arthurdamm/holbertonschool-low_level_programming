#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree from an array
 * @array: input array
 * @size: size of the array
 * Return: pointer to the root node of the created AVL tree, or NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i = 0;
	avl_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		printf("number to insert: %i\n", array[i]);
		avl_insert(&root, array[i]);
		binary_tree_print(root);
		printf("=======================================================\n\n");
		i++;
	}
	return (root);
}
