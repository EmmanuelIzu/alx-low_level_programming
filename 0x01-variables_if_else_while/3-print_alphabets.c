#include<stdio.h>
#include<ctype.h>

int main(void)
/*prints the alphabets A to Z in lowercase and uppercase*/
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	++c;
	}

	while (c <= 'z')
	{
	putchar(toupper(c));
	++c;
	}
	putchar('\n');

return (0);
}
