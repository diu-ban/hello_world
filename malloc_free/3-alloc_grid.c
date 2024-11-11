#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the allocated 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int row, col;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i-- > 0)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			arr[row][col] = 0;
		}
	}

	return (arr);
}
