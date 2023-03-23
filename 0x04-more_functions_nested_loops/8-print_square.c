#include "main.h"
/**
 * print_square - Function that prints Line
 * @size: accepts input
 */
void print_square(int size)
{
	int square, i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (square = 0; square < size; ++square)
	{
	for (i = 0; i < size; ++i)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	_putchar('\n');
	}

}
