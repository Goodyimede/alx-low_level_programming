#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array holding int
 * @size: array size
 * @cmp: function pointer to compare search int
 *
 * Return: int elemnt match, -1 if size <=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
