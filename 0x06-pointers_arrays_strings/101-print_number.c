#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: function parameter
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		k = -k;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
