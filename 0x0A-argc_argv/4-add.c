#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will add positive numbers
 * @argc: count of arguments
 * @argv: pointers to arguments
 * Return: addition if positive and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) && atoi(argv[i]) > 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
