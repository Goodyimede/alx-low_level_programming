#include "main.h"

/**
 * rev_string - a function that adds two numbers
 * @n: function parameter
 * Return: Always 0
 */

void rev_string(char *n)
{
	int j = 0;
	int k = 0;
	char temp;

	while (*(n + j) != '\0')
	{
		j++;
	}
		j--;

	for (k = 0; k < j; k++, j--)
	{
		temp = *(n + k);
		*(n + k) = *(n + j);
		*(n + j) = temp;
	}
}
