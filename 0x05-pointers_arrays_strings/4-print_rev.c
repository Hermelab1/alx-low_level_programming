#include "main.h"

/**
 * _strlen - to print the length of string
 *
 * @str: string pointer
 *
 * return: string size
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}

/**
 * pint_revers - to print a string in the revers
 *
 * @s: character pointer
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n')
}
