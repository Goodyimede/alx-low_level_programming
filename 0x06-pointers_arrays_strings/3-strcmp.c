#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int j;
	int k = 0;

	for (j = 0; s1[j] != '\0' && k == 0; j++)
	{
		k = s1[j] - s2[j];
	}

	return (k);
}
