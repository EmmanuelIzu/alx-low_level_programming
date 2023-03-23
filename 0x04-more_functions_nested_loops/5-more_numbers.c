#include "main.h"
/**
 * more_numbers - function that prints 0 to 14 ten times
 * my_putchar - function that prints long int
 * @long: accepts a long int
 */


void my_putchar(long);

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
		if (j > 9){
		_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
		}
	_putchar('\n');

	}

}
