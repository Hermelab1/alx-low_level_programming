#include "main.h"

/**
 * _isdigit - is to check for digit from 0 to 9
 *
 * @c: char to check
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return 0;
}
