#include<stdio.h>
#include<stdlib.h>

/**
 * main -  The program Starts here
 * @argc: The number of arguments entered
 * @argv: an argument array
 * Return: return 0 always
 */


int main(int argc, char *argv[])
{
	int count;
	(void)argc;

	if (argc > 1)
	{
	count = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", count);
	}
	else
	{
	printf("Error\n");
	}

return (0);
}
