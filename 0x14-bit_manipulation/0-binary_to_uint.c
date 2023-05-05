#include "main.h"

/**
 * binary_to_uint - converts to unsigned interger.
 * @b: input strings.
 * Return: return the number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

