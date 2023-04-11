#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * make_buff - function allocates 1024 bytes to buffer
 * @f: The name of the file stored in buff
 * Retutn: pointer to buff buffer
 */

char *make_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	
	return (buff);
}

int main(int argc, char *argv[])
{
	int f1, f2, rf;
	char *buff;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(argv[2]);
	f1 = open(argv[1], O_RDONLY);
	rf = read(f1, buff, 1024);
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY);

	do
	{
		int wf;

		wf = write(f2, buff, rf);
		rf = read(f1, buff, 1024);
		f2 = open(arg[2], O_WRONLY | O_APPEND);
	} while (rf > 0);

	free(buff);
	close(f1);
	close(f2);
	
	return (0);
}
