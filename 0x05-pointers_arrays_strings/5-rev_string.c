#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	char rev = s[0];

	while (s[0] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; ++i)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
