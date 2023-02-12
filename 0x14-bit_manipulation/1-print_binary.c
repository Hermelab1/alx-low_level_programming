#include "main.h"
#include <stdio.h>

/**
 * print_binary - to print binary representation of a number
 *
 * @n: is a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		printf("0");
	}
	else
	{
		while (n > 0)
		{
			if (n & mask)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			n >>= 1;
		}
	}
}
