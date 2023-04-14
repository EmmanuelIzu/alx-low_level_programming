#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block with new size
 * @ptr: The old memory
 * @old_size: old pointer size
 * @new_size: new pointer size
 * Return: return ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

