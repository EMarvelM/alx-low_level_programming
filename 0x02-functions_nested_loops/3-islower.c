#include "main.h"

/**
 * _islower - check the code
 *
 * @c: character to be checked
 *
 * Return: 1 if @c is a lowercase letter, 0 otherwise
 *
 */
int _islower(int c)
{
	int i;
	char turn = c;
	char alpha = 97;

	for (i = 0; i < 26; i++)
	{
		if (turn == alpha)
		{
			return (1);
		}
		alpha++;
	}
	return (0);
}
