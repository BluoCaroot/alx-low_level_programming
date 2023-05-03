#include "lists.h"
/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to head list
 * @n: element to add
 * Return: NULL if fail address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
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
