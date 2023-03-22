#include "main.h"

/**
 * print_sign - function that checks if the value is a negative number
 * Return: outputs -1 if less than 0, 1 if greater or equal to 0, and 0 if 0
 * @n: accepts the input for checking
 * _putchar: prints an output
 */




int print_sign(int n)
{

	int check_for_negative = n;

	if (check_for_negative < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (check_for_negative >= 0)
	{
	_putchar('+');
	return (+1);
	}
	else
	{
	_putchar('0');
	return (0);
	}

}
