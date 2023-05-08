#include "main.h"

/**
 * append_text_to_file - function that appends a text to a specific file.
 * @filename: pointer to a string that contains the file name.
 * @text_content: pointer to a string that contains the text.
 * Return: 1 if success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		for (len = 0; text_content[len] ;)
			len++;
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);

	return (1);
}
