#include "main.h"
/**
 * print_binary - prints binary representation of a decimal
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int current, i, cnt = 0;

	for (i = 31; i >= 0; --i)
	{
		current = (n >> i);
		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
