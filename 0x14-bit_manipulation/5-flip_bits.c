#include "main.h"
unsigned int count_bits(unsigned long int n);
/**
 * flip_bits - counts number of different bits
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
/**
 * count_bits - counts set bits
 * @n: number to count
 * Return: number of set bits
 */
unsigned int count_bits(unsigned long int n)
{
	unsigned int cnt = 0;

	while (n)
	{
		cnt++;
		n &= n - 1;
	}
	return (cnt);
}
