#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of command line argument
 * @argv: array that contains the program command line argument
 * Return:(0)
 */

int main(int argc, char *argv[])
{
	int j, k, add = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
