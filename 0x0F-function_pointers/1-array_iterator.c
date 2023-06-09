#include <stddef.h>
/**
 * array_iterator -function that prints an array
 * @array: input array
 * @size: length of array
 * @action: pointer to the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array)
		return;

	if (size == 0)
		return;

	if (action)
	{

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
	}
}
