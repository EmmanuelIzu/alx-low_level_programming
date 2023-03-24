#include "main.h"
/**
 * print_number - function that prints intergers
 * @n: holding variable
 */


void print_number(int n)
{
int m = n;

if (n < 0)
{
n *= -1;
m = n;
_putchar('-');

}

m /= 10;
if (m != o)
	print_number(m);
	_putchar((unsigned int) n % 10 + '0');









}
