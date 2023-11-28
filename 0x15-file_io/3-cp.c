#include "main.h"

/**
 * print_error_exit - Print error message and exit with provided error code
 * @err_code: Error code to exit with
 * @message: Error message to print
 * @file_name: Name of the file associated with the error
 *
 * Function prints error message to STDERR_FILEN; exit with provided error code
 */

void print_error_exit(int err_code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(err_code);
}

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int open_file(const char *file_name, int flags)
{
	int fd = open(file_name, flags);

	if (fd == -1)
	{
		print_error_exit(98, "Error: Can't read from file %s\n", file_name);
	}
	return (fd);
}

void copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error_exit(99, "Error: Can't write to file\n", "");
		}
	}

	if (bytes_read == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error_exit(98, "Error: Can't read from file\n", "");
	}
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to\n", "");
	}

	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	copy_file(fd_from, fd_to);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
