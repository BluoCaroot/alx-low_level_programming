#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, temp;
	int i, size, cnt, j;

	size = 0, x = 0;
	if (!b)
		return (0);
	while (b[size])
		size++;
	for (i = size - 1, cnt = 0; i >= 0; ++cnt, --i)
	{
		temp = 1;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			for (j = 0; j < cnt; ++j)
				temp *= 2;
			x += temp;
		}
	}
	return (x);
}

