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
	ssize_t fd, rd, w;


	if (filename == NULL)
		return (0);


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, rd);
	if (fd == -1 || rd == -1 || w != rd)
	{
		free(buffer);
		return (0);
	}


	close(fd);
	free(buffer);

	return (w);
}
