#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output.
 * @filename: the file name
 * @letters: the number of letters
 *
 * Return: 0 if something fails OTHERWISE return the number written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_letters;
	ssize_t num_written;
	char *file_content;

	if (!filename)
		return (0);

	file_content = malloc(sizeof(char) * (letters));
	if (!file_content)
		return (0);

	fd = open(filename, O_RDONLY);
	num_letters = read(fd, file_content, letters);
	num_written = write(STDOUT_FILENO, file_content, num_letters);

	if (fd < 0 || num_letters < 0 || num_written < 0 || num_letters != num_written)
	{
		free(file_content);
		return (0);
	}

	free(file_content);
	close(fd);

	return (num_written);
}
