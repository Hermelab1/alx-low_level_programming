#include "main.h"

/**
 * print_alphabet: print all alphabet character
 *
 * Return: void
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
