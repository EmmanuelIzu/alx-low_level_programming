#include <stdio.h>
/**
 * int_index - return an index of comparism
 * @array: an array pointer
 * @size: the size of the array
 * @cmp: a pointer to a function
 * Return: the return value of the function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	i++;
	}
	return (-1);
}

