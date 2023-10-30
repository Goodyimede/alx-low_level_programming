#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: the name of the file content is appended to
 * @text_content: content to be appended to the file
 *
 * Return: 1 on success and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int jk;
	int pnletter;
	int pmn;

	if (!filename)
		return (-1);

	jk = open(filename, O_WRONLY | O_APPEND);

		if (jk == -1)
			return (-1);

	if (text_content)
	{
		for (pnletter = 0; text_content[pnletter]; pnletter++)
			;
		pmn = write(jk, text_content, pnletter);

		if (pmn == -1)
			return (-1);
	}
	close(jk);

	return (1);
}
