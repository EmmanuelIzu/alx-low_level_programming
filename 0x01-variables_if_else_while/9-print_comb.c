#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	int c;

	c = 0;

	while (c <= 9)
	{
	if (c != 9)
	{
	putchar('0'+c);
	putchar(',');
	putchar(' ');
	}else
	{
	putchar('0'+c);
	}
	++c;
	}

return (0);
}
