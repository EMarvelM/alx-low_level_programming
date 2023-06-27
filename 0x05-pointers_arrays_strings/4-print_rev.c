#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: parameter pointing to string
 *
 * Return: always void
 */
void print_rev(char *s)
{
	int i;
	int lent;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		lent = i;
		/*lopping to get number of i*/
	}

	while (lent > -1)
	{
		_putchar(s[lent]);
		lent--;
	}
	_putchar('\n');
}
