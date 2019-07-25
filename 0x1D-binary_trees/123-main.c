#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

void remove_val(avl_t *tree, int val)
{
	printf("Removing %d...\n", val);
	tree = avl_remove(tree, val);
	binary_tree_print(tree);
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	avl_t *tree;
	int i = 0;
	int array[] = {
		79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
		20, 22, 98, 1, 62, 95
	};
	size_t n = sizeof(array) / sizeof(array[0]);

	tree = array_to_avl(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);

	for (i = 0; i < (ssize_t)n; i++)
		remove_val(tree, array[i]);

	binary_tree_delete(tree);
	return (0);
}
