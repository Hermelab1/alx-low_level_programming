#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -  to read file and prints in to the POSIX
 *
 * @filename: file name
 * @letters: the content of the file
 * Return: the number of the letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t nread;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		return (0);
	}
	nread = read(file_descriptor, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, nread) != nread)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (nread);
}
