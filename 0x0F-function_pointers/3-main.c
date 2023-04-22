#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int x, y;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	a = argv[2];

	if (!get_op_func(a) || a[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((((*a) == '/') || ((*a) == '%')) && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(a)(x, y));
	return (0);
}
