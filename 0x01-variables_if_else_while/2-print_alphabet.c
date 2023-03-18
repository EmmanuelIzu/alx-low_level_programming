#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	char c;

	c = 'a';

	while (c < 'z')
	{
	putchar(c,"\n");
	++c;
	}

return (0);
}
