#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * Return: return the last digit of a number
 * @n: Hold the Input value
 * Description: This function checks for the last digit of a number
 */


int print_last_digit(int n)
{

	int last_digit = (n % 10);

	if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);

return (last_digit);
}
