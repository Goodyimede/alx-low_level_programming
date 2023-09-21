#include "main.h"
/**
 * _strncat - the main function
 * @dest: destination string
 * @src: source string
 * @n: num of element to concertenate from src
 * Return: dest + n of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;
	int len_src = n;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; i < len_src; i++)
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}


	return (dest);
}
