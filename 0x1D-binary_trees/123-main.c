#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <time.h>

/**
 * rand_array - generates random int array
 *
 * @len: the length of the array
 * @max: the max size of each integer
 * 
 * Return: the generated int array
 */
int *rand_array(int len, int max)
{
	int *arr;

	arr = calloc(len, sizeof(int));
	if (!arr)
		return (NULL);
	if (!max)
		max = RAND_MAX;
	srand(time(NULL));
	while (len--)
		arr[len] = rand() % max;
	return (arr);
}


avl_t *remove_val(avl_t *tree, int val)
{
	printf("Removing %d...\n", val);
	tree = avl_remove(tree, val);
	printf("NEW ROOT: %d\n", tree ? tree->n : 0);
	binary_tree_print(tree);
	return tree;
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
		5, 9, 0, 7, 2
	};
	size_t n = sizeof(array) / sizeof(array[0]);
	/*
	size_t n = 10;
	int *array = rand_array(n, 10);
	*/

	tree = array_to_avl(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);
	printf("==============================\n");
	(void)i;
	tree = remove_val(tree, 9);
	tree = remove_val(tree, 5);
 	/*
	for (i = 0; i < (ssize_t)n; i++)
		tree = remove_val(tree, array[i]);
	*/

	binary_tree_delete(tree);
	return (0);
}
