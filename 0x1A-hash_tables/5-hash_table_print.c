#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *curr;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		curr = ht->array[i];
		if (!curr)
			continue;
		if (f)
			printf(", ");
		while (curr)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			if (curr->next)
				printf(", ");
			curr = curr->next;
		}
		f = 1;
	}
	printf("}\n");
}
