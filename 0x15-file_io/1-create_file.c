#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *content)
{
	int file_descriptor, num_bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len]; len++)
			;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num_bytes_written = write(file_descriptor, content, len);

	if (file_descriptor == -1 || num_bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}