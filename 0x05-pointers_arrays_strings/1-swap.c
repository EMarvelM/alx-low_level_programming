#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @b: int parameters for unswapped integer
 * @a: int parameters for unswapped integer
 *
 * Returns: always void
 */
void swap_int(int *a, int *b)
{
	int tempo = *a;

	*a = *b;

	*b = tempo;
}
