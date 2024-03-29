#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the array(sorted in ascending order)to serach
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: The index of the value's location if successful,
 * else, returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right, left, i;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
