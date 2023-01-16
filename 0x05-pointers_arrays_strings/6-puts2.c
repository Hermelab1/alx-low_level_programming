#include "main.h"

/**
 * _strlen - used to get the length of the string
 *
 * @s: length
 *
 * Return: the length of the string
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

/**
 * puts2 - prints the character of the string
 *
 * @str: string value
 */
void puts2(char *str)
{
	int lint = _strlen(str);
	int i;
	
	for (i = 0; i < lint; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
