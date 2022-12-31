#include "main.h"
#include <stdio.h>

/**
 * Print_times_table- is used to print n number of time table
 *
 * @n: numbers for time table
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
