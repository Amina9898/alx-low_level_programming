#include"main.h"
/**
 * print_alphabet_x10 - function will print alphabet ten times
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	int n, k;

	k = 0;

	while (k < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		k++;

		_putchar('\n');
	}
}
