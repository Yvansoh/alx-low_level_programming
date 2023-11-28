#include "main.h"

/**
 * create_file - Creates file with specific permission and writes content to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descr, write_status, close_status;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descr == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(file_descr, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(file_descr);
			return (-1);
		}
	}

	close_status = close(file_descr);
	if (close_status == -1)
		return (-1);

	return (1);
}
