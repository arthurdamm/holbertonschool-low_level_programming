#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
