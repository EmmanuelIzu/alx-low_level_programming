#include "main.h"
/**
 * print_triangle - Function that prints Line
 * @size: accepts input
 */
void print_triangle(int size)
{
	int i, j, k;

	k = size;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 0; j < size; j++)
	{
	k--;
	for (i = 0; i < size; i++)
	{
	if (i < k)
	{
	_putchar(' ');
	}
	else
	{
	_putchar('#');
	}

	}
	_putchar('\n');
	}

	}

}
