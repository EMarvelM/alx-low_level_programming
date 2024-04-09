#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - search for value in sorted array
 *		using the binary search algorithm
 * @array: the array of integers to search
 * @size: the size of the array of int
 * @value: the value to search for
 *
 * Return: the index or -1 when not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	int middle = (low + high) / 2, i;

	if (array == NULL)
		return (-1);

	/* print(array, low, high); */


	for (i = 0; low <= high; i += 2)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[middle] == value)
		{
			return (array[middle]);
		}
		else if (array[middle] < value)
		{
			low = middle + 1;
		}
		else if (array[middle] > value)
		{
			high = middle - 1;
		}
		middle = (low + high) / 2;

	}
	return (-1);

}
