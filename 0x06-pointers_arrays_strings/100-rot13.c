#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 *
 * @str: the string input
 *
 * Return: string out
 */
char *rot13(char *str)
{
	int j, k;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; c[k] != '\0'; k++)
		{
			if (str[j] == c[k])
			{
				str[j] = d[k];
				break;
			}
		}
	}

	return (str);
}
