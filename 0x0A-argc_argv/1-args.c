#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: argument that counts number of arguments
 * @argv: argument that stores the strings in an array of char*
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d", argc - 1);
	return (0);
}
