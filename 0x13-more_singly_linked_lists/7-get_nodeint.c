#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function returns the nth node
 * of a linked list
 * @head: pointer to the first node
 * @index: position we want to extract data from
 * Return: n value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (0);
}
