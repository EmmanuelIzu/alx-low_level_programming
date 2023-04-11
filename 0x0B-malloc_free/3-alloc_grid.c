#include <stdlib.h>
/**
 * alloc_grid - allocate 2D array and initialize to zero
 * @width: input variable
 * @height: input variable
 * Return: return NULL or arr pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; ++i)
	{
	arr[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; ++i)
	{
	if (arr[i] == NULL)
	{
		if (arr[i] == NULL)
		{
			for (i = width; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}
	}

	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			arr[i][j] = 0;
		}
	}

return (arr);
}
