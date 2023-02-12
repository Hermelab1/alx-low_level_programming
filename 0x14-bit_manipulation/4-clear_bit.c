#include "main.h"
#include <stdio.h>

/**
 * clear_bit - to set the value at the given index
 *
 * @n: number
 * @index: the index that sets the bit it starts from 0
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
