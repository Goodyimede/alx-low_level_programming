#include "main.h"
#include "stdlib.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: input string one
 * @s2: input string two
 *
 * Return: pointer to a newly allocated space,
 * in memory
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j;
	char *pmt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	pmt = malloc(sizeof(char) * (len1 + len2 + 1));
	if (pmt == NULL)
	{
		free(pmt);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		pmt[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		pmt[i] = s2[j];
		i++;
	}
	return (pmt);
}
