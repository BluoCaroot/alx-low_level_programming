#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 if success -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	
	for (len = 0; text_content[len]; len++);
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	
	return (1);
}
