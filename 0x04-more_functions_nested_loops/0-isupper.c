#include <ctype.h>
/**
 * _isupper - a function that checks for upper case
 * Return: return 1 if true and 0 if false
 * @c: character that holds the Value to checked
 */



int _isupper(int c)
{
	int check_upper = isupper(c);

	if (check_upper == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
