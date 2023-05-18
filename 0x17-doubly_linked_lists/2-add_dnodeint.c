#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: list pointer
 * @n: int value for inserted node
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	new->next = *head;
	*head = new;

	if (!new)
		return (NULL);
	return (new);
}
