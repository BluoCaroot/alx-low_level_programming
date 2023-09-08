#include "hash_tables.h"
/**
 * hash_table_get - gets element from table
 * @ht: hash table
 * @key: element key
 * Return: value at of element or NULL if fail or not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned int index;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(key, curr->key))
			return (curr->value);
	}
	return (NULL);
}
