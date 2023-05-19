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

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	ptr = *h;
	while (ptr)
	{
		if (counter == idx - 1)
		{
			new->prev = ptr;
			new->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = new;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		counter++;
	}
	free(new);
	return (NULL);
}
