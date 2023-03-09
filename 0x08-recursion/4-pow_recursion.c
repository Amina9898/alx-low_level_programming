#include "main.h"

/**
 * _pow_recursion - function will calculate power of x
 * @x: input
 * @y: integer input
 * Return: intger
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
