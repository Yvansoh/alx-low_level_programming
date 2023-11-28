#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Pointer to the name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	char *buffer;
	int file_descriptor;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
