#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	int c;

	c = 0;

	while (c < 10)
	{
	putchar('0'+c);
	putchar(',');
	putchar(' ');
	++c;
	}
	putchar('\n');

return (0);
}
