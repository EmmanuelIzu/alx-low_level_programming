#include <stdlib.h>
#include "main.h"
/**
 * count - counts number of words
 * @s: input string
 *
 * Return: number of words in a string.
 */
int count(char *s)
{
	int pos = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			pos = 0;
		else if (pos == 0)
		{
			pos = 1;
			j++;
		}
		i++;
	}
	return (j);
}

/**
 * **strtow - function that splits string
 * @str: input string
 * Return: NULL or pointer to array
 */
char **strtow(char *str)
{
	int a, b = 0, word, length = 0, c = 0, alpha, beta;
	char **arr, *tmp;


	while (*(str + length))
	{
		length++;
	}
	word = count(str);
	if (word == 0)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (word + 1));
	if (arr == NULL)
		return (NULL);
	a = 0;
	while (a <= length)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				beta = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (alpha < beta)
					*tmp++ = str[alpha++];
				*tmp = '\0';
				arr[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			alpha = a;
		a++;
	}
	arr[b] = NULL;
	return (arr);
}

