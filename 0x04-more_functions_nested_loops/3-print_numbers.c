#include "main.h"

/**
 * print_numbers - to print numbers from 0 to 9, followed by new lines.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
