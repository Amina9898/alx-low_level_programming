#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function will allocate memory
 * @b: unsigned int
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	unsigned int i;
	
	for (i = 0; i < b; i++)
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
