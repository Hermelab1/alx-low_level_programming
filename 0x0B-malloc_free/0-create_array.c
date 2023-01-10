#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an arry and intializes with a specific char
 *
 * @c: character to fill
 * @size: size of return pointer
 *
 * Return: pointer fills character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int charloop;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (charloop = 0; charloop < size; charloop++)
	{
		s[charloop] = c;
	}

	return (s);
}
