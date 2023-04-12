#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatnate argv
 * @ac: Vector length
 * @av: Input vector
 * Return: return NULL of pointer array
 *
 */
char *argstostr(int ac, char **av)
{
	int k, length = 0, i, l;
	unsigned int j;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; ++k)
	{
	length = length + strlen(av[k]);
	}

	arr = malloc(sizeof(char) * (length + 1));

	if (arr == NULL)
		return (NULL);

	l = 0;

	for (i = 0; i < ac; ++i)
	{

		for (j = 0; j < strlen(av[i]); ++j)
		{
		arr[l] = av[i][j];
		++l;
		}
		arr[l] = *"\n";
		++l;
	}

return (arr);
}
