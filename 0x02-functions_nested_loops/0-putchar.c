#include "main.h"

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');

	return (0);
}
