#include "main.h"
/**
 * _abs - that computes the absolute value of an integer
 *
 * @n: number which we will give the absoulute value
 * Return: 0 if success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}

	return (n);
}
