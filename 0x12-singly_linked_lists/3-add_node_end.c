#include "lists.h"

/**
 * add_node_end - add node to end
 * @head: head referrence
 * @str: string to add
 * Return: address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = head, *new = (list_t *) malloc(sizeof(size_t));
	int i = 0;

	while (str[i])
		i++;

	if (!new)
		return (NULL);
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
