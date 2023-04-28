#include "lists.h"

/**
 * add_node - adds a node to list
 * @head: head of list
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
