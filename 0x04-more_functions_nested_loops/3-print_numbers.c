#include "main.h"

/**
 * print_numbers - print the numbers, from 0 to 9, follow by the new line
 * 
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
