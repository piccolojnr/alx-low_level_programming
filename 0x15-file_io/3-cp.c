#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message and exits
 * @code: error code
 * @message: error message
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_src, fd_dest;
	ssize_t b_read, written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];

	fd_src = open(file_from, O_RDONLY);
	if (fd_src == -1)
		error_exit(98, "Error: Can't read from file");

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
		error_exit(99, "Error: Can't write to file");


	while ((b_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		written = write(fd_dest, buffer, b_read);
		if (written != b_read)
			error_exit(99, "Error: Can't write to file");
	}

	if (b_read == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_src) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(fd_dest) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
