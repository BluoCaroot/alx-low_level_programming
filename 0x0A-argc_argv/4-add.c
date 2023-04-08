#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: number of args
 * @argv: args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;

	while (argc > 1)
	{
		if (*argv[argc - 1] >= '0' && *argv[argc - 1] <= '9')
			sum += atoi(argv[--argc]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
