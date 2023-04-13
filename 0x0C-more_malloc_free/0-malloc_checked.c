#include <stdlib.h>
/**
 * malloc_checked - a function that creates malloc code.
 * @b: side of array to be created
 * Return: return arr
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	if (b <= 0)
	{
		exit(98);
	}

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
