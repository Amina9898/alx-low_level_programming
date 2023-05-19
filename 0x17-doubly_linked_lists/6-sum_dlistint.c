#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: pointer to list
 * Return: sum of data n
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	if (!head)
		return (0);

	ptr = head;

	sum = ptr->n;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}

	return (sum);
}
