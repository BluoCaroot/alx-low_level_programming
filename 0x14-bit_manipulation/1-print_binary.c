#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: devimal number
 * Return: none
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;

	for (i = 63; i >= 0; --i)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

