#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
	{
	return NULL;
	}
	arr = malloc(sizeof(char)*size);
	
	for (i = 0; i < (int)size; ++i)
	{
	arr[i] = c;
	}
	return (arr);
}
