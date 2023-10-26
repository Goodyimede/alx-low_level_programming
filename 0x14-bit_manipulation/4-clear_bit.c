#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: input parameter
 * @index: the index
 * Return: result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pack;

	pack = 1;
	pack = pack << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = pack ^ *n;

	return (1);
}
