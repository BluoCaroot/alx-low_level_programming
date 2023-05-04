#include "main.h"
/**
 * clear_bit - sets value of bit at given index to 0
 * @n: number
 * @index: index
 * Return: 1 if success -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
