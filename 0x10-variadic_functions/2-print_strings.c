#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: separator between two strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
