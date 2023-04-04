#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function will add node at
 * the beginning of a singly linked list
 * @head: pointer to the pointer head
 * @n: n part of listint_t struct
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (p == NULL)
		return (NULL);

	p = malloc(sizeof(listint_t));

	p->n = n;
	p->next = NULL;

	p->next = *head;
	*head = p;

	return (p);
}
