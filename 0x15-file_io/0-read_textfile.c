#include "main.h"
/**
 * read_textfile - reads text from file
 * @filename: name of file
 * @letters: number of letters to read
 * Return: 0 if fail otherwise number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, t, w;
	char *c;

	if (!filename)
		return (0);
	c = malloc(letters);
	f = open(filename, O_RDONLY);
	if (f == -1 || !c)
		return (0);
	t = read(f, c, letters);
	w = write(1, c, t);

	free(c);
	close(f);
	return (w);
}
