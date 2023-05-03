#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
}
