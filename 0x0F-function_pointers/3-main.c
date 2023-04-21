#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - prints the result of the operation
 * @argc: The amount of argument inputted
 * @argv: An array of argument
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int value1, value2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(argv[1]);
	op = argv[2];
	value2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && value2 == 0) ||
	    (*op == '%' && value2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(value1, value2));

return (0);
}

