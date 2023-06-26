#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 *
 * @str: parameter for string
 *
 * Return: always void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
