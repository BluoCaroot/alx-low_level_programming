#include "lists.h"
/**
 * listint_len - calculates length of list
 * @h: first element in list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
