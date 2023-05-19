#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to list
 * @index: index of node to retrieve
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int counter;

	node = head;
	counter = 0;

	if (!head)
		return (NULL);

	while (node != NULL)
	{
		if (counter == index)
			return (node);

		counter++;
		node = node->next;
	}

	return (NULL);
}
