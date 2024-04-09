#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - get the index of a match using linear search
 * @array: the array of integers to search
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the index if found and -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

