#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: filename
 * @letters: number of letters printed
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t cent, msk;
	char *poem;

	if (!filename)
		return (0);

	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);

	poem = malloc(sizeof(char) * letters);
	if (poem == NULL)
		return (0);

	cent = read(k, poem, letters);
	msk = write(STDOUT_FILENO, poem, cent);

	close(k);
	free(poem);

	return (msk);
}
