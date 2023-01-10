#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _length_recursion - to get the length of the cahracter
 *
 * @s: character string
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
 * *str_concat - used to concatinat two string
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer char
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int length1 = _length_recursion(s1);
	int length2 = _length_recursion(s2);
	char size = length1 + length2 + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (length1 = 0; s1[length1]; length1++)
	{
		s[length1] = s1[length1];
	}

	for (length2 = 0; s2[length2]; length1++, length2++)
	{
		s[length1] = s2[length2];
	}

	s[length1] = '\0';

	return (s);
}
