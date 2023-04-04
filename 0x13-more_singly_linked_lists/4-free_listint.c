#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function frees a listint_t list
 * @head: pointer to list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;

		head = head->next;
		free(p);
	}
}
