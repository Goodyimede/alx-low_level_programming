#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: strings to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int j, k;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; c[k] != '\0'; k++)
		{
			if (str[j] == c[k])
			{
				str[j] = d[k];
			}
		}
	}
	return (str);
}
