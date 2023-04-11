#include <stdlib.h>

/**
 * create_array - function that creates an array using malloc
 * @size: size of array
 * @c: character variable
 * Return: return NULL if not ok and arr if ok
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;
	arr = malloc(sizeof(char) * size);

	if (size <= 0 || arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < (int)size; ++i)
	{
	arr[i] = c;
	}
	return (arr);
}
