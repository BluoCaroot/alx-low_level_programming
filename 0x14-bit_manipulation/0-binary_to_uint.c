#include "main.h"
/**
 * binary_to_uint - function to convert binary to decimal
 * @b: binary number
 * Return: 0 if fail or decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int d, i = 0, rem;
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	--i;

	for (d = 1; i >= 0; --i)
	{
		rem = b[i] - '0';
		dec += rem * d;
		d *= 2;
	}
	return (dec);
}
