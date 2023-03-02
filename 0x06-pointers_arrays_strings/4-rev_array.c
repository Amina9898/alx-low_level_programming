#include "main.h"

/**
 * reverse_array - function will reverse array
 * @a: input
 * @n: number of elements to be swapped
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
