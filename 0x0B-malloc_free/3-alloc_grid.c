#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers
  *@width: number of integers for each row
  *@height: number of pointers to integer arrays
  *Return: NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	grid = (int **) malloc(height * sizeof(int *));
	grid[i] = (int *) malloc(width * sizeof(int));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
