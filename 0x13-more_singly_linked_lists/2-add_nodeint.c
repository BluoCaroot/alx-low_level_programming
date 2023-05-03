#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to head of list
 * @n: integer to add to list
 * Return: NULL if fail - address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
