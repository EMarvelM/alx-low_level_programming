#include "main.h"
#include <stdio.h>

/**
 * _strcat - concartenate two strings together
 * @dest: first parameter for function
 * @src: second parameter for function
 *
 * Return: always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int first;

	if (dest == NULL || src == NULL)
	{
		return (0);
	}

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}
	dest--;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest++;
		*dest = src[j];
	}
       
	first = i + j - 2;

	dest[first] = '\0';

	while (first >= 0)
	{
		dest--;
		first--;
	}

	return (dest);
}
