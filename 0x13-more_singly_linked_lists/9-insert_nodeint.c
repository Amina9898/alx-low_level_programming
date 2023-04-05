#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - dunction inserts node at
 * a given position in a linked list
 * @head: pointer to pointer
 * @idx: index
 * @n: data for new node
 * Return: pointer for new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *p2;
	unsigned int count = 0;

	p2 = malloc(sizeof(listint_t));

	p2->n = n;
	p2->next = NULL;

	p = *head;

	if (!head || !*head || !p)
		return (NULL);
	while (p)
	{
		if (idx == count)
			break;
		count++;
		p = p->next;
	}
	p2->next = p->next;
	p->next = p2;

	if (!p2)
		return (NULL);

	return (p2);
}
