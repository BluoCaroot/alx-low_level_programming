#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: NULL if fail or if any input is zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i, s;

	if (nmemb > size)
		return (NULL);
	s = size - nmemb + 1;
	ptr = malloc(sizeof(int) * s);
	if (!ptr)
		return (NULL);
	for (i = 0; nmemb <= size; i++)
		ptr[i] = nmemb++;
	return (ptr);
}
