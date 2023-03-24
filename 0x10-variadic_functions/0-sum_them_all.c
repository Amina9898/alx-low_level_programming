#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function will summ all of its parameters
 * @n: constant
 * Return: 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;

	unsigned int i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nptr, int);

	va_end(nptr);
	return (sum);
}
