#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: number of character
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length, size_s;

	size_s = _strlen(src);

	for (length = 0; length < n; length++)
	{
		dest[length] = (length <= size_s) ? src[length] : '\0';
	}

	return (dest);
}
