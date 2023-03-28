#include "main.h"
#include <stdio.h>
/**
 * print_array - the Function that prints arrays
 * @a: the array pointer
 * @n: the variable counter
 */
void print_array(int *a, int n)
{
	int i, neg1;

	neg1 = n - 1;

	if (n <= 0){
	printf(" ");
	}
	else
	{
	for (i = 0; i < (n-1); i++)
	{

	if (i == (neg1))
	{
	printf("%d", a[neg1]);
	printf("\n");
	}
	else
	{
	printf("%d", a[i]);
	printf(",");
	printf(" ");
	}

	}

}

}
