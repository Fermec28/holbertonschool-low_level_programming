#include "holberton.h"

/**
 * read_textfile - read text file
 * @filename: path to file
 * @letters: buffer size
 * Return: num of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	buffer =  malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	num = read(fd, buffer, letters * sizeof(char));
	if (num == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	num = write(STDOUT_FILENO, buffer, num);
	if (num == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	else
	{
		free(buffer);
		close(fd);
		return (num);
	}
}
