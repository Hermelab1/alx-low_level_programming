#include "main.h"

/**
 * print_triangle - is used to print triangle
 *
 * @size: is size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
