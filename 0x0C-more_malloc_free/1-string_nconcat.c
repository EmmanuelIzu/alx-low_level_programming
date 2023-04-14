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

	unsigned int length1 = 0, length2 = 0, i = 0, j = 0;
	char *arr;

	if (n < j)
		exit(98);

	while (s1 && s1[length1])		
		length1++;
		
	while (s2 && s2[length2])	
		length2++;

	if (n >= length2)
		arr = malloc(sizeof(char) * (length1 + length2 + 1));
	else
		arr = malloc(sizeof(char) * (length1 + n + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (length1 + 1); ++i)
		arr[i] = s1[i];

	if (!(n >= (length2 + 1)))
		for (i = 0; i < n ; ++i)
		{
			arr[length1] = s2[i];
			length1++;
		}
	else
		for (i = 0; i < (length2 + 1); ++i)
		{
		arr[length1] = s2[i];
		length1++;
		}

return (arr);
}
