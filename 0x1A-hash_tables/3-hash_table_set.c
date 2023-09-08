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
	int found = 0;
	hash_node_t *curr;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(curr->key, key))
		{
			free(curr->value);
			curr->value = strdup(value);
			if (!curr->value)
				return (0);
			found = 1;
			break;
		}
		curr = curr->next;
	}
	if (!found && !add_node(&(ht->array[index]), key, value))
		return (0);
	else
		return (1);
}

/**
 * add_node - adds node at begining of list
 * @head: first element of linked list
 * @key: key of element
 * @value: value
 * Return: pointer to element or NULL if fail
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (*head);

}
