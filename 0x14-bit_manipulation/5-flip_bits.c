#include "main.h"
#include <stdio.h>

/**
 * flip_bits - to flip the number to get one number to another
 *
 * @n: number
 * @m: another number
 * Return: the fliped value c
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int i;
	
	for (i = 0; i < sizeof(n)*8; i++)
	{
		if ((n & (1 << i)) != (m & (1 << i)))
		{
			c++;
		}
	}
	return (c);
}
