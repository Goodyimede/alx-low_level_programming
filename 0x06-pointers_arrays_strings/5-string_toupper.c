#include "main.h"
/**
 * string_toupper - function that changes lowercase of a string to uppercase
 *
 * @str: input to be converted
 *
 * Return: n
 */
char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			str[k] = str[k] - 32;
		}
	}
	return (str);
}
