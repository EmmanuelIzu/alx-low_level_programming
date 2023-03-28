#include "main.h"
#include <stdio.h>
/**
 * print_array - the Function that prints arrays
 * @a: the array pointer
 * @n: the variable counter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);

	}
	if (i == (n - 1))
	{

	}
	printf("\n");
}
