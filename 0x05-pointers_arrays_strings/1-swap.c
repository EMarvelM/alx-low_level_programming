#include "main.h"

/**
 * swap_init - swaps the values of two integers
 *
 * @a, @b: int parameters for unswapped integer
 *
 * Returns: always void
 */
void swap_int(int *a, int *b)
{
	int tempo = *a;

	*a = *b;

	*b = tempo;
}
