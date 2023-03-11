#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will multiply two integers
 * @argc: count of arguments passed
 * @argv: array of pointers
 * Return: multiplication if success and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("%s\n", "Error");
		return (0);
	}
	exit(EXIT_SUCCESS);
}
