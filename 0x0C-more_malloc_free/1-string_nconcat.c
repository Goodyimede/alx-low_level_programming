#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: no of element to concatenate from s2
 *
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t j, k, x;
	char *s;

	if (s1 == NULL)
		j = 0;
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
			;
	}

	if (s2 == NULL)
		k = 0;
	else
	{
		for (k = 0; s2[k] != '\0'; k++)
			;
	}
	if (k > n)
		k = n;
	s = malloc(sizeof(char) * (j + k + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < j; x++)
		s[x] = s1[x];
	for (x = 0; x < k; x++)
		s[x + j] = s2[x];
	s[j + k] = '\0';
	return (s);
}
