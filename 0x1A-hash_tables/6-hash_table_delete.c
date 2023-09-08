#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		curr = ht->array[i];
		while (curr)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
