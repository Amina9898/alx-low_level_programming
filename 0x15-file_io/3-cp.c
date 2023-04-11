#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *make_buff(char *f);
void close_file(int fd);

/**
 * make_buff - function allocates 1024 bytes to buffer
 * @f: The name of the file stored in buff
 * Return: pointer to buff buffer
 */

char *make_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - function will close files
 * @fd: the file descriptor
 * Return: nothing
 */

void close_file(int fd)
{
	int cf;

	cf = close(fd);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies from f1 to f2
 * @argc: number of args
 * @argv: an array of pointers to args
 * Return: 0 if successful
 *
 * Description: if argc is not correct, exit code 97
 */
int main(int argc, char *argv[])
{
	int f1, f2, rf, wf;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(argv[2]);
	f1 = open(argv[1], O_RDONLY);
	rf = read(f1, buff, 1024);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f1 == -1 || rf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wf = write(f2, buff, rf);

		if (f2 == -1 || wf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rf = read(f1, buff, 1024);
		f2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (rf > 0);

	free(buff);
	close_file(f1);
	close_file(f2);

	return (0);
}
