/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to look for
 *
 * Return: the index where the value is located
 */

#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return(-1);
	
	for (i=0; i<= size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return(i);
	}

	return(-1);
}
