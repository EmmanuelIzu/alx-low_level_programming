#include "main.h"
/**
 * my_putchar - function that prints long char
 * @var: variable
 * _putchar: prints chars
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

