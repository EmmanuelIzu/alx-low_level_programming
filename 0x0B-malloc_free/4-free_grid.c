#include<stdlib.h>
/**
 * free_grid - Function that free a dynamic 2d array
 * @grid: pointer to a 2 d array
 * @height: size of a 2 d array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
		free(grid);
	}
