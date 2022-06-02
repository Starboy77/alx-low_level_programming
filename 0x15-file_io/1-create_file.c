#include "main.h"
#include <stdlib.h>


/**
 * create_file - creates a file if it does not exist
 * @filename: filename
 * @text_content: text content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = 0;
	while (text_content[i])
		i++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, i);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
