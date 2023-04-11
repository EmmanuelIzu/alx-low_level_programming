#include <string.h>
#include <stdlib.h>

/**
 * _strdup - create a duplicate string
 * @str: input string
 * Return: could be NULL or pointer array
 */

char *_strdup(char *str)
{
	int i;

	int length = strlen(str);

	char *arr = malloc(sizeof(char) * length);

	if (length == 0 || str == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < length; ++i)
	{
	arr[i] = str[i];
	}

return (arr);
}
