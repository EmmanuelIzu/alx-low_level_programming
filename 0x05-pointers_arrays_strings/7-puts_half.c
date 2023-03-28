#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half -function that prints half
 * @str: the pointer string
 */
void puts_half(char *str)
{
int len = 0;

while (*str != '\0')
{
	len++;
	str++;
}
str -= (len / 2);
while (*str != '\0')
{
	_putchar(*str);
	str++;
}

_putchar('\n');
}

