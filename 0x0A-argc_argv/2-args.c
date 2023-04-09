#include<stdio.h>

/**
 * main -  The program Starts here
 * @argc: The number of arguments entered
 * @argv: an argument array
 * Return: return 0 always
 */


int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; ++count)
	{
	printf("%s\n", argv[count]);
	}

return (0);
}
