#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (-1);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
		return (value);
	else if (array[i] > value)
		return (binary_search(array, i, value));
	else
		return (binary_search(array + i + 1, size - i - 1, value));
}
