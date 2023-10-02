#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s: first string
 * @accept: second string
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *index;

	for (; *s != '\0'; s++)
	{
		index = accept;
		for (; *index != '\0'; index++)
		{
			if (*s == *index)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
