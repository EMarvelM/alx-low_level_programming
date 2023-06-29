#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string for concatenation
 * @src: src of second string
 * @n: number of bits for src
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (*dest == '\0' || *src == '\0')
		return (0);

	for (i = 0; *dest != '\0'; i++)
		dest++;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > 0)
		{
			*dest = src[j];
			n--;
			dest++;
		}
	}
	return (dest);
}
