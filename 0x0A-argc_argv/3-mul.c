#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of ags
 * @argv: numbers to be multiplied
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	
}
