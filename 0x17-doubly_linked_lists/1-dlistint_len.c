#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: list pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
