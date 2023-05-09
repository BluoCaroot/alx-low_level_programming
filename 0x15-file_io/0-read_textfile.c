#include "main.h"
/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters in to print
 * Return: number of letters printed 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd;
	size_t w;
	size_t r;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(1, buf, r);

	free(buf);
	close(fd);
	if (w != letters)
		return (0);
	return (w);
}
