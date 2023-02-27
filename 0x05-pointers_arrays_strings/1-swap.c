#include "main.h"

/**
 * swap_int - function that swaps
 * @a : input
 * @b: input
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
