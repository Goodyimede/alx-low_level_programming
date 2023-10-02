#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where copied memory is stored
 * @src: memory to be copied
 * @n: no of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		dest[j] = src[j];
		n--;
	}

	return (dest);
}
