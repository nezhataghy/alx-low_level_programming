#include "main.h"

/**
 * create_file -  creates a file.
 * @filename: the file name
 * @text_content: is the file content
 *
 * Return: 1 on success OTHERWISE return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		num_written = write(fd, text_content, _strlen(text_content));
		if (num_written < 0)
			return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
