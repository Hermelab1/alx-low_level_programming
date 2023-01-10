#include <stdlib.h>
#include <stddef.h>

/**
 * _length_recursion - to get the lenght of string
 *
 * @s: char pointer
 *
 * Return: the lenght of the string
 */
int _length_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_length_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
/**
 * _strdup - pointer newly allocated space in a memory
 *
 * @str: char pointer to copy
 *
 * Return: a new char pointer
 */

char *_strdup(char *str)
{
	char *s;
	int charloop;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * (_length_recursion(str) + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (charloop = 0; charloop < _length_recursion(str) + 1; charloop++)
	{
		s[charloop] = str[charloop];
	}

	return (s);
}
