#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will be functioning
 * @argc: first parameter
 * @argv: pointer to an array of strings
 * Return: SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	exit (EXIT_SUCCESS);
}
