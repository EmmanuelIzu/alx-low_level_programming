#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	--c;
	}
	putchar('\n');

return (0);
}
