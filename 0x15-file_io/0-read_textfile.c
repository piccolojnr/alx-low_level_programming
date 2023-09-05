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
	int fd;
	char *buffer;
	ssize_t t_read = 0, b_read, b_written;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	while ((b_read = read(fd, buffer, letters)) > 0)
	{
		b_written = write(STDOUT_FILENO, buffer, (size_t)b_read);
		if (b_written != b_read)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		t_read += b_read;

		if ((size_t)t_read >= letters)
			break;
	}

	free(buffer);
	close(fd);
	return (t_read);
}
