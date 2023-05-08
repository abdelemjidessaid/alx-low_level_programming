#include "main.h"

/**
 * create_file - function that creates a file and writes on it.
 * @filename: pointer to the string that contains the file name.
 * @text_content: pointer to a string contains the content should be writen.
 * Return: 1 if success, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status = 1;
	long unsigned len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = strlen(text_content);
	if (len > 0)
		if (write(fd, text_content, len) == -1)
			return (-1);
	close(fd);

	return (status);
}
