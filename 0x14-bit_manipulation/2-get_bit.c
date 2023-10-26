#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index
 * @n: input parameter
 * Return: integer 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (k = 0; k < index; k++)
		n = n >> 1;
	return ((n & 1));
}
