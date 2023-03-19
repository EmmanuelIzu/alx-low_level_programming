#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	char c;

	c = '0';

	while (c <= '9')
	{
	if (c != '9')
	{
	putchar(c);
	putchar(',');
	putchar(' ');
	}else
	{
	putchar(c);
	}
	++c;
	}

return ('\n');
}
