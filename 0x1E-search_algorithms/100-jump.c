#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search an array for a value by segmenting into blocks 
 * of size of square root of the size of the array
 * @array: the array to search
 * @size: the size of te array
 * @value: the value to search from
 *
 * Return: -1 if the value is not found and the index if the value was found
 */

int jump_search(int *array, size_t size, int value)
{
	int low = 0, high, root, i, j;

	root = sqrt(size);
	high = (int)root;


	if (!array)
		return (-1);

	/* 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	*/
	for(i = low; i < (int)size; i++)
	{
		if (value == array[low])
			return (low);
		else if (value >= array[i] && value <= array[high])
		{
			for (j = low; j <= high; j++)
			{
				if (value == array[j])
					return (j);
			}
		}
		else
		{
			low = high + 1;
			high += (int)root;
		}
	printf("Verbose\tlow --> %d\n\t\thigh --> %d\n", low, high);
	}
	return (-1);
}
