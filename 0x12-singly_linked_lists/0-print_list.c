#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(conts list_t *h)
{
	list_t *temp = h;
	size_t i = 1;

	while (temp->next)
	{
		i++;
		temp = temp->next;
	}
	if (!h)
		i = 0;
	while(h)
	{
		if (h->len)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[%d] %s", 0, "(nil)");
	}
	return (i);
