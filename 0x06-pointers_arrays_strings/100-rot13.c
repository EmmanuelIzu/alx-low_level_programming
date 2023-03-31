#include <string.h>
#include <stdio.h>

/**
 * rot13 - function
 * @n: variable
 * Return: return pointer
 *
 */


char *rot13(char *n)
{
char upperside[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char lowerside[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;
	int uppersidelength = strlen(upperside);

	for (i = 0; n[i] != '\0'; i++)
	{

		for (j = 0; j < uppersidelength; j++)
		{
			if (n[i] == upperside[j])
		{
			n[i] = lowerside[j];
			break;

		}

		}

	}
return (n);
}
