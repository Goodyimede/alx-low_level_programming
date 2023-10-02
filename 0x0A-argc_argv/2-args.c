#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of comman line argument
 * @argv: array that contains the program command line argument
 *
 * Return:(0)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
