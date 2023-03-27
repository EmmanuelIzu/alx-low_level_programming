#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half -function that prints half
 * @str: the pointer string
 */
void puts_half(char *str)
{
	int len, halflen, i;

	len = strlen(str);
	halflen = len / 2;

	if ((len % 2) == 0){
	
	for (i = halflen; i < len ; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
	_putchar(str[halflen]);
	}
	_putchar('\n');
}
