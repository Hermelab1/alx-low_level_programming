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
	int size = 0;

	while(*s != '\o')
	{
		size++;
		s++;
	}
	return (size);
}
