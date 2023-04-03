#include<string.h>

/**
 * _strspn - Function
 * @s: constant Variable
 * @accept: Constant variable
 * Return: return value
 */

unsigned int _strspn(char *s, char *accept)
{
	int spn = strspn(s, accept);

return (spn);
}
