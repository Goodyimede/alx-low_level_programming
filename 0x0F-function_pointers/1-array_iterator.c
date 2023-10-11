#include "function_pointers.h"

/**
 * array_iterator - iterate through an array
 * @array: array
 * @size: size of array
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(*array);
		array++;
	}
}
