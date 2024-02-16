#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table.
 *@ht: hash tabe to add the element to
 *@key: the key
 *@value: value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new_node;

	if (!ht || key || key[0] == '\0' || !value)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}

	tmp = ht->array[index];
	new_node->next = tmp;
	ht->array[index] = new_node;
	return (1);
}
