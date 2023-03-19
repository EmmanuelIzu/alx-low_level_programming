#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a <= 9)
	{
		c++;
		b = c;
		while (b <= 9)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
			b++;
					}
	b = 0;
	a++;
	}
	putchar('\n');
return (0);
}
