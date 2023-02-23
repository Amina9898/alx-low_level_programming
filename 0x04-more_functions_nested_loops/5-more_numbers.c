#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */

void more_numbers(void)
{
	int j;

	j = 0;

	while (j < 14)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
			_putchar('\n');
		j++;
	}
	_putchar('\n');
}
