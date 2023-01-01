#include "main.h"
#include <stdio.h>

/**
 * Print_times_table- is used to print n number of time table
 *
 * @n: numbers for time table
 */
void print_times_table(int n)
{
	int i, j, number;
	
	for (i = 0; i <= n; ++i)
	{
		for(j = 0; j <= n; j++)
		{
			number = j * i;
			
			if (j > 0 && number >= 0 && number < 10)
			{
				_putchar(' ');
			}
			if (j > 0 && number >= 0 && number < 100)
			{
				_putchar(' ');
			}
			printf("%d", number);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
