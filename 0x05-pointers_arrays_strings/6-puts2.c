#include "main.h"

/**
 * puts2 - function is pissing me off
 * @str : input
 * Return: every other character of a string
 */

puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
