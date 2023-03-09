#include "main.h"

/**
 * _sqrt_recursion - dunction will return square root
 * @n : integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n / _sqrt_recursion(n) != _sqrt_recursion(n))
		return (n);
	else
		return (n / _sqrt_recursion(n));
}
