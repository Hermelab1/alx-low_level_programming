#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - to convert binary to unsigned int
 *
 * @b: pointers to the siring 0 and 1 characters
 * Return: the converte number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int num = 0;
	int base = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num += (b[i] - '0') * base;
		base *= 2;
	}
	return (num);
}
