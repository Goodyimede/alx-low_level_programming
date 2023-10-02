#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of command line argument
 * @argv: array that contains the program command line argument
 *
 * Return:(0)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
