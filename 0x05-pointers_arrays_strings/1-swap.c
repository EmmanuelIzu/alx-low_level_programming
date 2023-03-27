#include "main.h"
/**
 * swap_int - a function that swaps two integers
 * @a: accepts first value
 * @b: accepts second value
 */


void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;

	*a = *b;
	*b = temp;

}
