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

	for (i = 0; i <= 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
		my_putchar(j);
		}
	_putchar('\n');

	}
}

/**
* my_putchar - function that prints long int
* @var: hold the input value passed
*/

void my_putchar(long var)
{
	if (var < 0)
	{
	_putchar('-');
	var = var * -1;
	}

	if (var == 0)
	_putchar('0');

	if (var / 10)
	my_putchar(var / 10);
	_putchar(var % 10 + '0');

}

