#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter for string argument (pointer)
 *
 * Return: int of strlength
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		/* Incrementing *s and i in the loop */
		s++;
	}
	return (i);
}
