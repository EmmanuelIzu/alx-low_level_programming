#include<string.h>
#include<stdlib.h>

/**
 * string_nconcat - concatnate two string.
 * @s1: input string
 * @s2: input string
 * @n: input integer
 * Return: return arr or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int length, i;
	char *arr;

	length = strlen(s1);

	if (n >= strlen(s2))
		arr = malloc(sizeof(char) * (length + strlen(s2) + 1));
	else
		arr = malloc(sizeof(char) * (length + n + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; ++i)
		arr[i] = s1[i];

	if (!(n >= strlen(s2)))
		for (i = 0; i < n ; ++i)
		{
			arr[length] = s2[i];
			length++;
		}
	else
		for (i = 0; i < strlen(s2); ++i)
		{
		arr[length] = s2[i];
		length++;
		}
	length = 0;

return (arr);
}
