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
	char *arr;

	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;


	while (s1 && s1[length1])

		length1++;

	while (s2 && s2[length2])

		length2++;
	

	if (n < length2)

		arr = malloc(sizeof(char) * (length1 + n + 1));

	else

		arr = malloc(sizeof(char) * (length1 + length2 + 1));



	if (arr == NULL)

		return (NULL);



	for (i = 0; i < length1; ++i)
		arr[i] = s1[i];


	while (n < length2 && i < (length1 + n))
		arr[i++] = s2[j++];

	while (n >= length2 && i < (length1 + length2))
		arr[i++] = s2[j++];

	arr[i] = '\0';

	return (arr);

}

