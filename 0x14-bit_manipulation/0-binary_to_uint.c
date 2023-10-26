#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: a character pointer to a string
 * Return: (sum)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t j = 0;
	size_t k = 0;
	size_t sum = 0;
	size_t row = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		return (0);
		for (k = len - 1; k > 0; k--)
		row = row * base;
		sum = sum + (row * (b[j] - 48));
		len--;
		row = 1;
	}
	return (sum);
}
