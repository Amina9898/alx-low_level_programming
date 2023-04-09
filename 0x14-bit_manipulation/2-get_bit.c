#include "main.h"

/**
 * get_bit - function that returns the value of a
 * bit at a given index
 * @n: input number
 * @index: index to get bit
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 0X1;
	}

	j = n & 0x1;

	return (j);
}
