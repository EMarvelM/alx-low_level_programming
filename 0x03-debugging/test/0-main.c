#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0.
 */
int main(void)
{
	int test = positive_or_negative();

	if (test == 0)
		printf("%d is zero", test);
	return (0);		
}
