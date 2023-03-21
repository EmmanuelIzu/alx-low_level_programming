#include "main.h"
/**
 *print_alphabet_x10 - print the alphabeth 10 times
 *
 */

void print_alphabet_x10(void)
{
	char number;
	char alpha;

	for (number = 0; number <= 9; ++number)
	{
		for (alpha = 'a'; alpha <= 'z'; ++alpha)
		{
		_putchar(alpha);
		}

	_putchar('\n');
	}
}
