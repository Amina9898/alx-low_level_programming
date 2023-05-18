#include "lists.h"

/**
 * print_dlinsint - function that prints all the elements of a
 * dlistint_t list.
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
