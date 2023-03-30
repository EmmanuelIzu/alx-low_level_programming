#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * leet - function that changes
 * @n: variable
 * Return: return pointer
 */

char *leet(char *n)
{
	char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	int length = strlen(n);

	int lengthofalpha = sizeof(alpha) / sizeof(alpha[0]);

	for (i = 0; i < lengthofalpha; i++)
	{
		for (j = 0; j < length; j++)
		{
		if (alpha[i] == n[j])
		{
		n[j] = number[i];
		}

		/*
		 * printf("%c", alpha[i]);
		 * printf("%c", number[i]);
		 * printf("%c ", n[j]);
		 */
	}
	}
return (n);
}
