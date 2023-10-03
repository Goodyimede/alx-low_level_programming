#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to an array of integers
 */

int **alloc_grid(int width, int height)
{
	int j, k;
	int **gridoff;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridoff = malloc(height * sizeof(int *));
	if (gridoff == NULL)
	{
		free(gridoff);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		gridoff[j] = malloc(width * sizeof(int));
		if (gridoff[j] == NULL)
		{
			for (j--; j >= 0; j--)
			free(gridoff[j]);
			free(gridoff);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			gridoff[j][k] = 0;

	return (gridoff);
}
