#include "main.h"

/**
 * _puts - to print a string
 *
 * @str: Int pointer
 */
void _puts(char *str)
{
	int *s = str;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
