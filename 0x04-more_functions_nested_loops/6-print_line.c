#include "main.h"
/**
 * print_line - Function that prints Line
 * @n: accepts input
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (line = 0; line < n; ++line)
	{
	_putchar('_');
	}
	}

}
