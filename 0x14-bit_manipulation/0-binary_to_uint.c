#include "main.h"

/**
 * binary_to_uint - convert binary to positive number.
 * @b: parameter for pointer to strings of 0s & 1s.
 *
 * Return: the coverted number if a b is null or 0 when
 * there is neither 1 or 0 in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int power = 0;
	int track = 0;

	while (b[track] != '\0')
	{
		track++;
	}
	track--; /* returned the tracker from the null char */

	while (track >= 0)
	{
		if (b[track] == '1')
		{
			result = result + (1 << power);
			power++;
		}
		else if (b[track] == '0')
		{
			power++;
		}
		else
		{
			return (0);
		}
		track--;

	}
	return (result);
}
