#include "main.h"
/**
 * get_bit - prints bit at given index
 * @n: number
 * @index: index
 * Return: 1 if bit is set 0 if unset
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return -1;
	return ((n >> index) & 1);
}
