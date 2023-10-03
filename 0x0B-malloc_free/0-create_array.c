#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of characters
 * @size: input size of array
 * @c: the string
 *
 * Return: a pointer to base character c
 */

char *create_array(unsigned int size, char c)
{
	size_t k;
	char *pmt;

	if (size == 0)
	{
		return (NULL);
	}
	pmt = malloc(sizeof(char) * size);
	if (pmt == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		pmt[k] = c;
	}
	return (pmt);
}
