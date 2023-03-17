#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int x = 0;
	
	while (x < 0)
	{
		printf("%d", x++);
	}
	return (0);
}
