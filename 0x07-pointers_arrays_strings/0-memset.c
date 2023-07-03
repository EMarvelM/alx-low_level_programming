#include "main.h"

/**
 * _memset - function that fills memory with a constant bytes
 * @s: pointer to memory
 * @b: value to be filled
 * @n: bytes of the first memory
 *
 * Return: char.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
