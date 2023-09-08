#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of table
 * Return: pointer to the table NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
		hash->array[i] = NULL;
	return (hash);
}
