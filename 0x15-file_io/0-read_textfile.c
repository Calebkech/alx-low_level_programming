#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *file, size_t num_letters)
{
	ssize_t file_descriptor, num_bytes_read, num_bytes_written;
	char *buffer;

	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * num_letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(file, O_RDONLY);
	num_bytes_read = read(file_descriptor, buffer, num_letters);
	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);

	if (file_descriptor == -1 || num_bytes_read == -1 || num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (num_bytes_written);
}