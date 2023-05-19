#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointer to list
 * @idx: index of the list wherr node is to be added.
 * @n: data part in new node
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int counter = 0;

	if (!h)
		return (NULL);

	ptr = *h;

	while (ptr != NULL && counter < idx)
	{
		ptr = ptr->next;
		counter++;
	}

	if (counter < idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
                return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;

		if (*h != NULL)
			(*h)->prev = new;

		*h = new;
	}
	else
	{
		new->prev = ptr->prev;
		new->next = ptr;
		ptr->prev->next = new;
		ptr->prev = new;

	}
	return (new);
}
