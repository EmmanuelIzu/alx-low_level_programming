#include <stdlib.h>

/**
 * array_range - prints range of values
 * @min: array min
 * @max: array max
 * Return: return array or NULL
 *
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
