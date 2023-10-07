#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: void
 */

int *array_range(int min, int max)
{
	int j, l;
	int *k;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	k = malloc(sizeof(int) * l);
	if (k == NULL)
		return (NULL);
	for (j = 0; j < l; j++)
	{
		k[j] = min;
		min++;
	}
	return (k);
}
