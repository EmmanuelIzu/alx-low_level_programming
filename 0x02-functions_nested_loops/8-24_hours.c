#include "main.h"
/**
 * jack_bauer - function that prints time
 * _putchar - function that prints character
 * my_putchar - function that prints character
 */


void jack_bauer(void)
{

	int minutes;
	int hours;

	for (hours = 0; hours <= 23; ++hours)
	{
		for (minutes = 0; minutes <= 59; ++minutes)
		{
		if (hours <= 9)
		{
		_putchar('0');
		_putchar(hours + '0');
		_putchar(':');
		}
		else
		{
		my_putchar(hours);
		_putchar(':');
		}
		if (minutes <= 9)
		{
		_putchar('0');
		_putchar(minutes + '0');
		}
		else
		{
		my_putchar(minutes);
		}
		_putchar('\n');
		}
	}


}

