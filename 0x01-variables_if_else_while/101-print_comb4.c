#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	while (a <= 9)
	{
	d++;
	b = d;
	f++;
	e = f;
	while (b <= 9)
	{
	e++;
	c = e;
	while (c <= 9)
	{
	putchar('0' + a);
	putchar('0' + b);
	putchar('0' + c);
	if (a == 7 && b == 8 && c == 9)
	{
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	c = 0;
	b++;
	}
	b = 0;
	a++;
	e = 0;
	}
	putchar('\n');
return (0);
}
