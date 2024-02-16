#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key.
 *@ht: hash table to search
 *@key: the key to search for
 *Return: value associated with the element, or NULL if key can’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || key[0] == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
