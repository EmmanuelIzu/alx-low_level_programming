#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc: length of argument
 * @argv: Input array
 * Return: return the status, 0 or 1
 */
int main(int argc, char *argv[])
{
	int values, n = 0, output = 0;

	int array[] = {25, 10, 5, 2, 1};


	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	values = atoi(argv[1]);

	if (values < 0)
	{
		printf("0\n");
		return (0);
	}

	while (n < 5 && values >= 0)
	{
		while (values >= array[n])
		{
			output = output + 1;
			values = values - array[n];
		}
		n++;
	}

	printf("%d\n", output);
	return (0);
}

