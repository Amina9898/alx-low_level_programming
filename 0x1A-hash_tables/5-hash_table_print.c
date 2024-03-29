#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned int count = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count == 1)
				printf(", ");

		node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
		count = 1;
		}
	}
	printf("}\n");
}
