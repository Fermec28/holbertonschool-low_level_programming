#include "holberton.h"
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: value of arguments
 * Return: Alway 0
 */
int main(int argc, char *argv[])
{
	int fd_source, bytes, fd_destination;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_destination == -1)
	{
		close(fd_source);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while((bytes = read(fd_source, buffer, 1024 )) > 0)
	{
		bytes = write(fd_destination,  buffer, bytes);
		if (bytes == -1)
		{
			close(fd_destination);
			close(fd_source);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes = close(fd_source);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO,  "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	bytes = close(fd_destination);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_destination);
		exit(100);
	}
	return (0);
}
