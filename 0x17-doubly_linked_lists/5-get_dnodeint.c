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

	if (index == 0)
		return (head);

	while (counter < index)
	{
		counter++;
		node = node->next;
	}

	if (!node)
		return (NULL);

	return (node);
}
