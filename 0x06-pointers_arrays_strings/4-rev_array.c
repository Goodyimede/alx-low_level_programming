#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: pointer to an array
 * @n: number of element in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j = 0, temp;

	n = n - 1;

	for (j = 0; j < n; j++)
	{
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
		n--;
	}
}
