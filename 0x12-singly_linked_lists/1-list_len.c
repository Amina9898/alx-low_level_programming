#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - dunction will return number of elements in a list
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
