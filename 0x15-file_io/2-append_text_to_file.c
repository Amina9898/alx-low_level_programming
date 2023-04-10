#include "main.h"

/**
 * appenf_text_to_file - function that appends text
 * at the end of a file
 * @filename: the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, slen);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
