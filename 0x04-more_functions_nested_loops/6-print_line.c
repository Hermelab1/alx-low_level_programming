#include "main.h"

/**
 * print_line - to print lines untile n times
 *
 * @n: numbers
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
