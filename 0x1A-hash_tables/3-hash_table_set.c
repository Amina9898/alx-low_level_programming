#include "hash_tables.h"

/**
 * create_node - function that creates a new node to add to table
 * @key: key
 * @value: value element of node
 * Return: pointer to new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: cannot be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *val;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}


	new_node = create_node(key, value);

	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

