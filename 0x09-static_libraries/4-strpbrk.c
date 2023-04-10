#include<string.h>
/**
 * _strpbrk - Main function
 * @s: input variable
 * @accept: variable
 * Return: return pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *occur;

	occur = strpbrk(s, accept);

return (occur);
}
