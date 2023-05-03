#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to head node;
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	
	if (!head)
		return (0);
	while (head)
	{
		i+=head->n;
		head = head->next;
	}
		return (i);
}
