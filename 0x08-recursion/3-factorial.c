#include "main.h"

/**
 * factorial - function will calculate factorial of number
 * @n: input
 * Return: integer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
