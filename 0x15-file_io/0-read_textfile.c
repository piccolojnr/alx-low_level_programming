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
	FILE *file;
	char *buffer;
	ssize_t read;
	ssize_t written;


	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read = fread(buffer, sizeof(char), letters, file);
	if (read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, read);

	fclose(file);
	free(buffer);

	if (written == read)
		return (written);
	else
		return (0);
}
