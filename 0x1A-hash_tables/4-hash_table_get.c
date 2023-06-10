#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 *
 * @ht: pointer to the hash table
 * @key: key to find
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;
	int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash = hash_djb2((unsigned char *)key);
	index = hash % ht->size;

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
