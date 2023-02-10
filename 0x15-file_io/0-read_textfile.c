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
	int file_descriptor, w;
	long int nread;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}
	nread = read(file_descriptor, buffer, letters);
	close(file_descriptor);
	if (nread == -1)
	{
		return (0);
	}
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	if (w == -1)
	{
		return (0);
	}

	return (nread);
}
