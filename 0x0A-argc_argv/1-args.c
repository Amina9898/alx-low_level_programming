#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will print out number of arguments
 * @argc: first paramater
 * @argv: pointer to array of strings
 * Return: SUCCESS
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	exit(EXIT_SUCCESS);
}
