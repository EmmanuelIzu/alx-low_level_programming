#include<string.h>
/**
 * _memcpy - Function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: return pointer dsc
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

return (dest);
}
