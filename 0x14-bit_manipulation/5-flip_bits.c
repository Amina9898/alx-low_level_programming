#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from
 * one number to another.
 * @n: first input number
 * @m: second input number
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b, cross;

	cross = n ^ m;

	b = 0;
	while (cross > 0)
	{
		b += (cross & 1);
		cross >>= 1;
	}
	return (b);
}
