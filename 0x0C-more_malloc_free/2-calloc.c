#include <stdlib.h>
/**
 * setarr - function that set an array
 * @arr: array
 * @insert: set value
 * @len: array length
 * Return: return arr
 */

char *setarr(char *arr, int insert, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		arr[i] = insert;

return (arr);

}

/**
 * _calloc - allocated 0 to array
 * @nmemb: input integer
 * @size: input integer
 * Return: return arr or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	setarr(arr, 0, nmemb);

	return (arr);

}
