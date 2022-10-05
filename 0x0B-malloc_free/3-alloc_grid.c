#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that allocates a pointer
 * to a 2D array of integers
 * @width: width of gridi
 * @height: height of grid
 *
 * Return: pointer otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	g = (int **)malloc(sizeof(int *) * height);
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			g[i][j] = 0;
	}
	return (g);
}

