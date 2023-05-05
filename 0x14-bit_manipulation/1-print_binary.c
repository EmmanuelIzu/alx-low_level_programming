#include "main.h"

/**
 * print_binary - print the binary.
 * @n: input number.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int hold;

	i = 63;

	while (i >= 0)
	{
		hold = n >> i;

		if (hold & 1)
		{
			_putchar('1');
			count++;
		}
		else if (hold)
			_putchar('0');
		i++;
	}

	if (!count)
		_putchar('0');
}

