#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - check the code for 0
 *
 * @n: integer parameter for checker
 *
 * Return: always 0.
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (n);
}
