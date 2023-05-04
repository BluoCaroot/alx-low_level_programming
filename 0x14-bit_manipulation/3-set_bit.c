#include "main.h"
/**
 * set_bit - sets bit at given index to 1
 * @n: number
 * @index: index
 * Return: 1 if success -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1UL >> index;
	return (1);
}
