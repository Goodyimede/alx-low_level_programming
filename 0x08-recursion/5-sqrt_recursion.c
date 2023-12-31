#include "main.h"
/**
 * sqrt_a - function that returns the natural square root
 * of a number
 *
 * @a: function parameter
 * @b: function parameter
 *
 * Return: -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: function parameter
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
