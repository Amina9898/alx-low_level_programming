#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_list
 * @head: pointer to the head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;
	
	while(*head != NULL)
	{

		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = 0;
}
