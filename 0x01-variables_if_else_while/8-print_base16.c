#include<stdio.h>

int main(void)
/*prints all the numbers in base sixteen*/
{
	char base16;
	char numbers;

	for(numbers = '0'; numbers <= '9'; numbers++){
	putchar(numbers);
	}

	for(base16 = 'a'; base16 <= 'f'; base16++)
	{	
	putchar(base16);
	}
	putchar('\n');	
return (0);
}
