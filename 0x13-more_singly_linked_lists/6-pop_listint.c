#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function deletes the head node of
 * a listint_t linked list
 * @head: pointer to first node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL || head == NULL)
		return (0);
	data = (*head)->n;
	ptr = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = ptr;
	return (data);
}
