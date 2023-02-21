#include"main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * desctiption: this function will print the alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

