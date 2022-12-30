#include "main.h"
/**
 * print_to_98: to print from n number to 98
 *
 * @n: the number that given
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
	}
	for (; n >= 98; n--)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
	}
}
