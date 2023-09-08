#include "hash_tables.h"
/**
 * hash_table_set - sets value of given key in hash table
 * @ht: hash table
 * @key: given key
 * @value: key to set
 * Return: 1 if success 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;

	index = key_index((unsigned char *)key, ht->size);
	if (!add_node(&(ht->array[index]), key, value))
		return (0);
	else
		return (1);
}

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	return (*head);

}
