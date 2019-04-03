#include "holberton.h"

/**
 * str_len - len of string
 * @str: string to calculate len
 * Return: lent of str
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * append_text_to_file - append text to file
 * @filename: filename path
 * @text_content: content to append
 * Return: status of the code
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytes = write(fd, text_content, str_len(text_content));
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
