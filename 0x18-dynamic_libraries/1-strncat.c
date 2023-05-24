#include "main.h"

/**
 * _strncat - concatenates two string
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: number of character
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, d_size;

	d_size = _strlen(dest);

	for (length = 0; length < n; length++)
	{
		dest[d_size + length] = src[length];
	}

	return (dest);
}
