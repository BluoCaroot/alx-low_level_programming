#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of ags
 * @argv: numbers to be multiplied
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y;

	x = argv[1] - '0';
	y = argv[2] - '0';
	if (argc)
	{
		printf("%d\n", x * y);
	}
	return (0);
}
