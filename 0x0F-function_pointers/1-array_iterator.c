#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function excutes functions
 * @array: array
 * @size: size of array
 * @action: pointer to the function u need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size < 1)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
