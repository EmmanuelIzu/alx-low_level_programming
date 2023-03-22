#include<ctype.h>
/**
 * _islower - checks if the input is a lower character
 * return: return the truth parameter
 * ret - Holds the return value
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
