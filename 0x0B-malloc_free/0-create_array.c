#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function will create an array of chars
 * @c: input
 * @size: size of char
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	return(array);
	}
	free(array);
}
