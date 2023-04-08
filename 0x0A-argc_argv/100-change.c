#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success 1 if fail
 */

int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1}, x, y, z;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		x = atoi(argv[1]);
		y = 0;
		z = 0;
		while (x != 0)
		{
			z += x / coins[y];
			x %= coins[y];
			y++;
		}
		printf("%d\n", z);
	}
	return (0);
}
