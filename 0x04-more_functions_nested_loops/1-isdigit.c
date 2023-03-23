#include <ctype.h>
/**
 * _isdigit - a function that checks for upper case
 * Return: return 1 if true and 0 if false
 * @c: character that holds the Value to checked
 */



int _isdigit(int c)
{

	int check_digit = isdigit(c);

	if (check_digit > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
