#include<string.h>
#include<stdlib.h>

/**
 * _ngreaterthans2 - concatnate two string.
 * @arr: input array
 * @s2: input string
 * @length: input integer
 * @n: input integer
 *
 */
void _ngreaterthans2(char *arr, char *s2, unsigned int length, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; ++i)
	{
	arr[length] = s2[i];
	length++;
	}

}

/**
 * _greaterthans2 - concatnate two string.
 * @arr: input array
 * @s2: input string
 * @length: input integer
 *
 */
void _greaterthans2(char *arr, char *s2, unsigned int length)
{
	unsigned int i;

	for (i = 0; i < strlen(s2); ++i)
	{
	arr[length] = s2[i];
	length++;
	}

}

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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1);

	arr = malloc(sizeof(char) * (length + n) + 1);

	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < length; ++i)
	{
	arr[i] = s1[i];
	}
	if (!(n >= strlen(s2)))
	{

		_ngreaterthans2(arr, s2, length, n);
	}
	else
	{
		_greaterthans2(arr, s2, length);
	}
	length = 0;

return (arr);
}
