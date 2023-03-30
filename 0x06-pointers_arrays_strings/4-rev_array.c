#include<stdio.h>
/**
 * reverse_array - function that reverse an array
 * @a: a variable
 * @n: a variable
 */

void reverse_array(int *a, int n)
{

	int hold[70];
	int i;

	for (i = 0; i < n; i++)
	{
	*(hold + i) = a[n - i - 1];
	}

	for (i = 0; i < n; i++)
	{
	a[i] = *(hold + i);
	}

}
