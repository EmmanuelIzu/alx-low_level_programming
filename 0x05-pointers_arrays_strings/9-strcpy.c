#include <string.h>
#include <stdio.h>
/**
 * _strcpy - The function that copies
 * @dest: var
 * @src: var
 * Return: return the string
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
