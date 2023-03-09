#include "main.h"

/**
 * is_prime_number - function will check for prime numbers
 * @n: input
 * Return: 1 if it's a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
