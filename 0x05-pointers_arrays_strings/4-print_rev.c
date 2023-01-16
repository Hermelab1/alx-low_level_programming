#include "main.h"

/**
 * _strlen - to print the length of string
 *
 * @s: string pointer
 *
 * Return: string size
 */
int _strlen(char *s)
{
	int len  = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_rev - to print a string in the revers
 *
 * @s: character pointer
 */
void print_rev(char *str)
{
	int lstring = _strlen(str) - 1;

	while (lstring >= 0)
	{
		_putchar(str[lstring]);
		lstring--;
	}
	_putchar('\n');
}
