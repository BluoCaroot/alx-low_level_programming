#include "main.h"
/**
 * flip_bits - returns number of bits to flip to turn one number to another
 * @n: first number
 * @m: second number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	int cnt;
	unsigned long int x = n ^ m, current;

	for (cnt = 63; cnt >= 0 ; --cnt)
	{
		current = x >> cnt;
		if (current & 1)
			i++;
	}
	return (i);
}
