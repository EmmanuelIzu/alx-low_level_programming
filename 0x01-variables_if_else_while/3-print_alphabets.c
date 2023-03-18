#include<stdio.h>
#include<ctype.h>

int main(void)
/*prints the alphabets A to Z in lowercase and uppercase*/
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
	putchar(c);
	++c;
	}

	while (d <= 'Z')
	{
	putchar(d);
	++c;
	}

	putchar('\n');

return (0);
}
