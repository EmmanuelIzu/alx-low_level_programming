#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * checknonint -  The program Starts here
 * @length: The number of arguments entered
 * @arr: an argument array
 * Return: return as required
 */

int checknonint (int length, char *arr[])
{
	int count, check = 0;

	for (count = 1; count < length; ++count)
	{
	if (atoi(arr[count]) == 0)
	{
	check++;
	}
	}

return (check);
}


/**
 * main -  The program Starts here
 * @argc: The number of arguments entered
 * @argv: an argument array
 * Return: return 0 always
 */


int main(int argc, char *argv[])
{
	int count, add = 0;

	if (checknonint(argc, argv))
	{
		printf("Error\n");
		return (1);
	}

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);

	}
	else
	{
	for (count = 1; count < argc; count++)
		{
		add = add + atoi(argv[count]);
		}
	printf("%d\n", add);
	return (0);
	}

}
