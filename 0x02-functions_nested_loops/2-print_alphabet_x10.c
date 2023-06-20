#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: always 0.
 *
 */

int print_alphabet()
{
	int i, n = 97;

	for (i = 0; i <= 10; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

	return (0);
}
