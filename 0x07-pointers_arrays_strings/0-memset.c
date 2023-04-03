#include <string.h>
/**
 * _memset -  The function.
 * @s: A Variable
 * @b: A variable
 * @n: A variable
 * Return: Return a string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

return (s);
}
