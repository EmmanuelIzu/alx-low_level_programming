#include<stdio.h>

int main(void)
/*prints the alphabets A to Z in lowercase*/
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
	if (c != 'q' && c != 'e')
	{
	putchar(c);
	}
	++c;
	}
	putchar('\n');

return (0);
}
