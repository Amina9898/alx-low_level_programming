#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to an array of chars
 * @letters: the number of letters it should read and print
 * Return: if file cannot be opened, filename = 0,
 * if write fails , return 0. Or else return
 * the actual number of letters it could
 * read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t of, rf, wf;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	rf = read(of, buff, letters);
	wf = write(STDOUT_FILENO, buff, rf);

	if (of == -1 || rf == -1 || wf == -1 || rf != wf)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(of);

	return (wf);
}
