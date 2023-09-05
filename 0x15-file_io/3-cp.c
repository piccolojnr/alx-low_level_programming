#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
 * handle_error - Prints error message and exits
 * @error_code: Error code
 * @file_name: File name
 */
void handle_error(int error_code, const char *file_name)
{
	switch (error_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		break;
	default:
		break;
	}
	exit(error_code);
}
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
		handle_error(98, file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error(99, file_to);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			handle_error(99, file_to);
	}

	if (bytes_read == -1)
		handle_error(98, file_from);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		handle_error(100, NULL);
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
		handle_error(97, NULL);

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
