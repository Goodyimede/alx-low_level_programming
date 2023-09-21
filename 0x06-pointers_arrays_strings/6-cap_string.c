#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: input string
 *
 * Return: str the modified string
 */
char *cap_string(char *str)
{
	int j, k;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j == 0 && str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	for (k = 0; c[k] != '\0'; k++)
	{
		if (c[k] == str[k] && (str[k + 1] >= 'a' && str[k + 1] <= 'z'))
		{
			str[j + 1] = str[j + 1] - 32;
		}
	}
	}
	return (str);
}
