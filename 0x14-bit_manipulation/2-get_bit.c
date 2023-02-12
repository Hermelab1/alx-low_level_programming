#include "main.h"
#include <stdio.h>

/**
 * get_bit - to retun the value of bit at given index
 *
 * @n: number
 * @index: the index of the bit it starting from 0
 * Return: the value of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
