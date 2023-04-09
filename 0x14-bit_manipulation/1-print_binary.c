#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal
 * Return: numnber represented in binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		_putchar(n + '0');
}
