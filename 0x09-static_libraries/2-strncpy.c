#include<string.h>
/**
 * _strncpy - Function copy string
 * @dest: variable destination.
 * @src: variable
 * @n: variable length
 * Return: return pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
