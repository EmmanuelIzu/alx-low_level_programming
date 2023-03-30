#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - function that converts
 * @n: variable
 * Return: return pointer
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (n[i - 1] == '\n' || n[i - 1] == '\t' || n[i - 1] == ' ')
			{
			n[i] = n[i] - 32;
		}
		}

	}
return (n);
}
