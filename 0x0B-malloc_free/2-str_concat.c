#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: input string variable
 * @s2: input string variable
 * Return: return NULL or Array pointer.
 *
 */
char *str_concat(char *s1, char *s2)
{

	int length, lengths1, lengths2, i, j;

	char *arr;

	lengths1 = strlen(s1);
	lengths2 = strlen(s2);

	length = lengths1 + lengths2;

	arr = malloc(sizeof(char) * length + 2);

	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < lengths1; ++i)
	{
	arr[i] = s1[i];
	}

	j = 0;

	for (i = lengths1; i < length; ++i)
	{
	arr[i] = s2[j];
	j++;
	}


return (arr);


}
