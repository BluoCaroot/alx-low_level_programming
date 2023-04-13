#include "main.h"
/**
 * malloc_checked - checks if memmory allocated successfully
 * @b: size of memmory to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
