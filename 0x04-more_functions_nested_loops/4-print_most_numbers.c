#include "main.h"

/**
 * print_most_numbers - to print the numbers from 0 to 9 followed by new line except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}

	_putchar('\n');
}
