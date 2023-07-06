#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: devimal number
 * Return: none
 */
void print_binary(unsigned long int n);
{
	while (n)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >>= 1;
	}
}
