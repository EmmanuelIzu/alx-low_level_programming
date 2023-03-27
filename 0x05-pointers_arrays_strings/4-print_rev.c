#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to print in reverse
 * @s: the pointer character
 */


void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; --i)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
