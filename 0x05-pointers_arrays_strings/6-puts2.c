#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Function that prints even
 * @str: the pointer variable.
 *
 */
void puts2(char *str)
{

int i, len;
len = strlen(str);

for (i = 0; i < len; i+=2)
{
	
	_putchar(str[i]);

}
	_putchar('\n');
}
