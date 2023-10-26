#include "main.h"

/**
 * set_bit -function that sets the bit of a number to 1
 * @n: input parameter
 * @index: the index
 *
 * Return: 1 on success and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pack;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	pack = 1;
	pack = pack << index;
	*n = ((*n) | pack);
	return (1);
}
