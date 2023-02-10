#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file
 * @text_content: a poiter that have the file content
 * Return: 1 as a success
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int result;
	int permission = S_IRUSR | S_IWUSR;

	if (!filename)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_CREAT | O_TRUNC | O_WRONLY, permission);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		result = write(file_descriptor, text_content, strlen(text_content));
		if (result == -1)
		{
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
