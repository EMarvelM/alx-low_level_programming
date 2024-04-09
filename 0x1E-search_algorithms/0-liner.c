#include "search_algos.h"

/**
 * fnc - explain
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

