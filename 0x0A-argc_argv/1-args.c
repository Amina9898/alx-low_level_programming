#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will print out number of arguments
 * @argc: first paramater
 * @argv: pointer to array of strings
 * Return: SUCCESS
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	exit(EXIT_SUCCESS);
}
