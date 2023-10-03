#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the array of character
 */
char *argstostr(int ac, char **av)
{
	char *aoff;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	aoff = malloc(sizeof(char) * len + 1);
	if (aoff == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			aoff[k] = av[i][j];
			k++;
		}
		if (aoff[k] == '\0')
		{
			aoff[k++] = '\n';
		}
	}
	return (aoff);
}
