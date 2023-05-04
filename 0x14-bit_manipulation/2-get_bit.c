#include "main.h"
/**
 * get_bit - returns of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: value of bit at index or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
