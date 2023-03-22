#include<ctype.h>
/**
 * _islower - checks if the input is a lower character
 * Return: 1 for lower case and 0 for anything else
 * ret - Holds the return value
 * @c: this will accept the input valuw with promise
 *
 */


int _islower(int c)
{
	int ret = c;

	if (ret >= 97 && ret <= 126)
	{
	return (1);
	}
	else
	return (0);
}
