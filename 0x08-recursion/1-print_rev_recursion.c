#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - Main Function
 * @s: Input Variable
 *
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s = s + 1;
	_print_rev_recursion(s);
	s = s - 1;
	_putchar(*s);

}
