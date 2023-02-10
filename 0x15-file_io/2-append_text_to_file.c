#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * append_text_to_file - a function that append the text at the end of file
 *
 * @filename: name of the file
 * @text_content: a pointer that have text content
 * Return: 1 for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}

	fclose(fp);
	return (1);
}
