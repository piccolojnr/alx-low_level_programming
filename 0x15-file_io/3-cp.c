#include "main.h"

void copy_file(const char *file_from, const char *file_to);

/**
 * copy_file - Copies a file
 * @file_from: File to copy from
 * @file_to: File to copy to
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}

/**
 * main - Copies a file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
