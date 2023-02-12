#include "main.h"
#include <stdio.h>

/**
 * get_endianness - to checks the endianness
 *
 * Return: 0 for big and 1 for little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
