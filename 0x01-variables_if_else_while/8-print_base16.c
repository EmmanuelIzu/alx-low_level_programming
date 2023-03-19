#include<stdio.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */



int main(void)
{
	char base16;
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
	putchar(numbers);
	}

	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
	putchar(base16);
	}

	putchar('\n');

return (0);
}
