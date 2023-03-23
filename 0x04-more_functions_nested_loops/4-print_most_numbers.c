#include "main.h"
/**
 * print_most_numbers - function that print numbers from 0 to 9
 * _putchar: prints a character int
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
	{
	if ((i == '2') || (i == '4'))
	{

	}
	else
	{
	_putchar(i);
	}
	}
	_putchar('\n');

}
