#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - search for value in sorted array
 * 		using the binary search algorithm
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

	print(array, low, high);

	for (i = 0; i < (int)size; i+=2)
	{
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

		print(array, low, high);
	}
	return (-1);

}


void print(int *array, int low, int high)
{
	printf("searching in the array:");
	for (; low <= high; low++)
	{
		printf(" %d", array[low]);
		if (low != high)
			printf(",");
	}
	printf("\n");
}
