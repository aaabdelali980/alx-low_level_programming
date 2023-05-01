#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width of the 2 dimensional array
 * @height: the height of the 2 dimensional array
 * Return: f width or height is 0 or negative, return NULL
 * otherwise - a pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
