#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 *
 * @s: pointer to the num of memory byte
 * @b: a byte constant
 * @n: num of byte of the memory
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}

	return (s);
}
