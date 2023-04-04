#include "lists.h"

/**
 * sum_listint - function sums all data (n) of a
 * listint_t linked list
 * @head: pointer to list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
