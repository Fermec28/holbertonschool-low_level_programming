#include "holberton.h"
/**
 * strlen - calculate the len
 * @str: string
 * Return: len of str
 */
int str_len(char *str)
{
	int strl = 0;

	while (str[strl])
		strl++;
	return (strl);
}
/**
 * create_file - create file
 * @filename: file name to create
 * @text_content: string to write
 * Return: status to create the file
 */
int create_file(const char *filename, char *text_content)
{
	int status = 1, fd;

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	text_content = text_content == NULL ? "" : text_content;
	status = write(fd, text_content, str_len(text_content));
	close(fd);
	if (status == -1)
	{
		return (-1);
	}
	return (1);
}
