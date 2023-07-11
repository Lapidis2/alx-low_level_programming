#include "main.h"
#include <stdlib.h>

/**
 * read_and_print_file - Reads a text file and prints its contents to stdout.
 * @filename: A pointer to the name of the file.
 * @max_chars: The maximum number of characters to read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of characters read and printed.
 */
ssize_t read_and_print_file(const char *filename, size_t max_chars)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * max_chars);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, buffer, max_chars);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}

