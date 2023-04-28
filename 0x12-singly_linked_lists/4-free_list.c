#include "lists.h"
/**
 * free_list - frees list from memory
 * @head: head ref
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
