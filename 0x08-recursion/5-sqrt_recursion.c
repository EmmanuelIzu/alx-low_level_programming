#include "main.h"
#include <stdio.h>


int _sqrt(int n, int m, int c);
/**
 * _sqrt_recursion - Main Function
 * @n: Variable
 * Return: Returns the square root.
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1, 1));
}

/**
 * _sqrt - Sqrt Function
 * @c: variable
 * @m: variable
 * @n: variable
 * Return: return sqrt
 */

int _sqrt(int n, int m, int c)
{
	int check = n - m;

	if ((check) == 0)
	{
	return (c);
	}
	if ((check) < 0)
	{
	return (-1);
	}
	c = c + 1;

	return (_sqrt((check), (m + 2), c));

}
