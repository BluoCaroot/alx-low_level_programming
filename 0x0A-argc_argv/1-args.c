#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: argument that counts number of arguments
 * @argv: argument that stores the strings in an array of char*
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
