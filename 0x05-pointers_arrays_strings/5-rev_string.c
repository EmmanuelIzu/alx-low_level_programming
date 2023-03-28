#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to print in reverse
 * @s: the pointer character
 */


void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s(index++))
	len++;

	for (index = ten - 1; index >= len / 2; index--)
	{
	temp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = temp;
	}
}
