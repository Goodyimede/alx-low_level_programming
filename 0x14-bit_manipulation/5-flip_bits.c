#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: first input parameter
 * @m: second input parameter
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int total;

	count = n ^ m;
	for (total = 0; count > 0;)
	{
		if ((count & 1) == 1)
			total++;
		count = count >> 1;
	}
	return (total);
}
