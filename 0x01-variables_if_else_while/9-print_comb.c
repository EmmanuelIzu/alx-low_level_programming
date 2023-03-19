#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	int c;

	c = 0;

	while (c < 10)
	{
	if (c != 9)
	{
	putchar('0'+c);
	putchar('", "');	
	}
	++c;
	}

return (0);
}
