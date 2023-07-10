#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - creats buffer
 * @file: file to add to bufer
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *BUFF;

	BUFF = malloc(1024);
	if (!BUFF)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (BUFF);
}
/**
 * close_file - closes a file
 * @fd: file discriminator
 * Return: none
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the content from one file to another
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int f, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(f, buff, 1024);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_file(t);
	close_file(f);
	return (0);
}
