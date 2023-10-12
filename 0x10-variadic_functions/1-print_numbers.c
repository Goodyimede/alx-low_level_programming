#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed btw numbers 
 * @n: number of integers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, arr;

	va_list ptr;

	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
