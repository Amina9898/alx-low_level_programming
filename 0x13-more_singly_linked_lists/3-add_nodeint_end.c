#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function adds a node to the
 * end of a singly linked list
 * @head: pointer to first node
 * @n: n part of node
 * Return: pointer to new added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *ptr;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
		*head = p;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = p;
	}

	return (p);
}
