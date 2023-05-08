#include "main.h"

/**
 * read_textfile - function that reads from a file and prints out.
 * @filename: a pointer to char arary that contains the file name.
 * @letters: number of letter that should be read.
 * Return: the number of letter that is printed out.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0, rest, read_flag = 0;
	size_t len;
	int fd;
	char *buf;

	rest = letters >= BUF_SIZE ? BUF_SIZE : letters;
	if (filename == NULL)
		return (0);
	buf = malloc(BUF_SIZE * sizeof(char));
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	do {
		if (rest < BUF_SIZE)
		{
			read_flag = read(fd, buf, rest);
		}
		else
		{
			read_flag = read(fd, buf, sizeof(buf));
		}
		if (read_flag == -1)
		{
			close(fd);
			return (0);
		}
		len = (size_t) read_flag;
		count += len;
		rest = letters - count;
		if (write(STDOUT_FILENO, buf, len) == -1)
		{
			close(fd);
			return (0);
		}
	} while (((size_t) count) < letters && len > 0);
	close(fd);
	return (count);
}

