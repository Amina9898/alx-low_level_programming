#include <stdio.h>
#include <stdlib.h>

/**
 * main - program will print its name
 * @argc: count of arguments
 * @argv: array of strings
 * Return: success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
