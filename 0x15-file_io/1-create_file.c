#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int of, wf, slen;

	slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[slen])
			slen++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, slen);

	if (of == -1 || wf == -1)
		return (0);

	close(of);

	return (1);
}
