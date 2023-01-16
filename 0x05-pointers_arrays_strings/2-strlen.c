#include "main.h"

/**
 * _strlen - to know the length of the string
 *
 * @s: character pointer
 *
 * Return: the string size
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
