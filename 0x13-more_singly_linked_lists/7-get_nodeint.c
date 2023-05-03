#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at the given index
 * @head: pointer to head node
 * @index: index to print
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find = head;
	unsigned int i = 0;

	while (i++ < index && find)
		find = find->next;
	if (!find)
		return (NULL);
	return (find);
}
