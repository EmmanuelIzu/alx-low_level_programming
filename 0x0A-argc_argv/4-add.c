#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main -  The program Starts here
 * @argc: The number of arguments entered
 * @argv: an argument array
 * Return: return 0 always
 */

int checknonint (int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int count, add = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);

	}
	else if (checknonint(argc, argv))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (count = 1; count < argc; count++)
		{
		add = add + atoi(argv[count]);
		}
	printf("%d\n", add);
	}
return (0);
}


/**
 * checknonint -  The program Starts here
 * @argc: The number of arguments entered
 * @argv: an argument array
 * Return: return as required
 */

int checknonint (int argc, char *argv[])
{
	int count, check = 0;

	for (count = 1; count < argc; ++count)
	{
	if (atoi(argv[count]) == 0)
	{
	check++;
	}
	}

return (check);
}

