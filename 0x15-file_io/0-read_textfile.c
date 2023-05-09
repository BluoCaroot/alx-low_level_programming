#include "main.h"
/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters in to print
 * Return: number of letters printed 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(1, buf, r);

	if (w == -1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
