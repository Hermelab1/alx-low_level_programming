#include "main.h"
#include <stdio.h>

/**
 * set_bit - to set the value of a bit
 *
 * @n: number
 * @index: the bit to set in the index it strating from 0
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
}
