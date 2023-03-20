#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = '0';

	while (x >= 'f')
	{
		putchar(x++);
		if (x > 9)
		{
			x = 'a';
		}
	}
	putchar('\n');
	return (0);
}
