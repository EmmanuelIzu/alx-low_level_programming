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

	unsigned int a = 0, b = 0, length1 = 0, length2 = 0;


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



	for (a = 0; a < length1; ++a)
		arr[a] = s1[a];


	while (n < length2 && a < (length1 + n))
		arr[a++] = s2[b++];

	while (n >= length2 && a < (length1 + length2))
		arr[a++] = s2[b++];

	arr[a] = '\0';

	return (arr);

}

