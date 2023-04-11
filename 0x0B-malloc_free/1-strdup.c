#include <string.h>
#include <stdlib.h>

/**
 * _strdup - create a duplicate string
 * @str: input string
 * Return: could be NULL or pointer array
 */

char *_strdup(char *str)
{

	int length, i;
	char *arr;

	if (str == NULL)
	{
	return (NULL);
	}

	length = strlen(str);
	arr = malloc((sizeof(char) * length) + 1);

	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < length; ++i)
	{
	arr[i] = str[i];
	}

return (arr);
}
