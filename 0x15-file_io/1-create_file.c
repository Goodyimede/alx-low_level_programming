#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the filename to be created
 * @text_content: content to be copied into the file
 * Return: 1 if suceesful or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int jk;
	int pnletter;
	int pmn;

	if (!filename)
		return (-1);

	jk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (jk == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (pnletter = 0; text_content[pnletter]; pnletter++)
		;
	pmn = write(jk, text_content, pnletter);

	if (pmn == -1)
		return (-1);
	close(jk);

	return (1);
}
