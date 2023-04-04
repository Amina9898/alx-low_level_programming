#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));
	
	p->n = n;
	p->next = NULL;

	while (*head-> != NULL)
	{
		head = *head->next;
	}

	p->next = *head;
	*head = p;

	if (!p)
	{
		return (NULL);
	}
	return (p);
}
