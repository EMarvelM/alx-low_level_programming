#include "main.h"

/**
 * _isalpha - check the code
 *
 * @c: character to be checked
 *
 * Return: 1 if @c is a lowercase or uppercase letter, 0 otherwise
 *
 */
int _isalpha(int c)
{
	int i;
	char turn = c;
	char alpha = 97;
	char ALP = 65;

	for (i = 0; i < 26; i++)
	{
		if (turn == alpha || turn == ALP)
		{
			return (1);
		}
		alpha++;
		ALP++;
	}
	return (0);
}
