#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - function that converts a binary
 * number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int i, slen;
	unsigned int num = 0, m = 1;

	if (b == NULL)
		return (0);
	
	for (slen = 0; b[slen];)
		slen++;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		else 
		{
			num += m; 
			m *= 2;
		}
	}
	return (num);
}
