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
		printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
