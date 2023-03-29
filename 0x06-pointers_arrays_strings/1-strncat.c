#include<string.h>

/**
 * _strncat - function that concat
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: return pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

return (dest);

}
