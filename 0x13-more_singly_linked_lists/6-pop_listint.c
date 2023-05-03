#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to first node
 * Return: 0 if list is empty or element of head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = temp;

	return (i);
}
