#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rd, written;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	if (written == rd)
		return (written);
	else
		return (0);
}
