#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * checknonint -  The program Starts here
 * @arr: an argument array
 * Return: return as required
 */

int checknonint (char *arr)
{
	int count;
	int size = strlen(arr);

	for (count = 0; count < size; ++count)
	{
	/*printf("%d\n",atoi(arr[count]));*/
	if (!isdigit(arr[count]))
	{
	return (1);
	}
	}

return (0);
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

	for (count = 1; count < argc; count++)
	{

	if (checknonint(argv[count]) == 0)
	{
	add = add + atoi(argv[count]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", add);
	return (0);

}
