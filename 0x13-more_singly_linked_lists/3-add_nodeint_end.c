#include "lists.h"
/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to head list
 * @n: element to add
 * Return: NULL if fail address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	while (h)
		*h = (*h)->next;
	*h = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
