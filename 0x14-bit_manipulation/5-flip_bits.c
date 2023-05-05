#include "main.h"

/**
 * flip_bits - flips_bits
 * @n: number 1
 * @m: number 2
 * Return: numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr_val;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr_val = ex >> i;
		if (curr_val & 1)
			count++;
	}
	return (count);
}

