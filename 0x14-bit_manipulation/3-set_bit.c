#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: points to the number to be changed
 * @index: index of the bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

