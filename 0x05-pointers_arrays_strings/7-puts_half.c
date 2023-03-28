#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half -function that prints half
 * @str: the pointer string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int halflen = strlen(str)/2;
	int i;
	
	if ((len % 2) == 0)
	{
		for (i = halflen; i < len; ++i)
		{
		if (i < (len-1)){
		_putchar(str[i]);
		}
		else if (i == (len-1))
		{
		_putchar(str[i]);
		}
		}
		
	}
	else
	{
	 for (i = (halflen - 1); i < len; ++i)
                {
                if (i < (len-1)){
                _putchar(str[i]);
                }
                else if (i == (len-1))
                {
                _putchar(str[i]);
                }
                }

	}
	_putchar('\n');
}
