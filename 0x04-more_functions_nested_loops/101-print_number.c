#include "main.h"

/**
 * print_number - an function to print integer
 *
 * @n: is an integer
 *
 * Return: always 0
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
		_putchar((num % 10) + 48);
	}
}
