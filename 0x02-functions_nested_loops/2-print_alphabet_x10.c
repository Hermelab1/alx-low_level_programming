#include "holberton.h"

/**
 * print_alphabet_x10 - Print 1O times alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;

	for (int repeat = 0; repeat < 10; repeat++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
