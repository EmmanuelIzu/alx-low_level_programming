#include "main.h"
/**
 * print_diagonal - Function that prints Line
 * @n: accepts input
 */

void print_diagonal(int n)
{
	int slash, i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (slash = 0; slash < n; ++slash)
	{
	for (i = 0; i <= slash; ++i)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}

}
