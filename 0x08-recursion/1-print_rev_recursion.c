#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Main Function
 * @s: Input Variable
 *
 */


void _print_rev_recursion(char *s)
{
	int length = strlen(s), i;

	for (i = (length - 1); i >= 0; i--)
	{
	_putchar(s[i]);
	}

}
