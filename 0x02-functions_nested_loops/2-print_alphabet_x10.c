#include "main.h"

/**
 * print_alphabet_x10 - print lower case alphabet
 *
 * Return: always 0.
 *
 */

void print_alphabet_x10(void)
{
	int i, n = 97;

	for (i = 0; i <= 9; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

}
