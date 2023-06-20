#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: always 0.
 *
 */

int print_alphabet(void)
{
	int n = 97;

	for (; n < 123; n++)
		_putchar(n);
	_putchar('\n');

	return (0);
}
