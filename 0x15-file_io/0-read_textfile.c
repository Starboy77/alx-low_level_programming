#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - reads file to stdout
 * @filename: filename
 * @letters: count
 * Return: no of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t fd, n, w;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * (letters + 2));
	if (s == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	n = read(fd, s, letters);
	if (n < 0)
		return (0);
	w = write(STDOUT_FILENO, s, n);
	if (w < 0)
		return (0);
	free(s);
	close(fd);
	return (n);
}
