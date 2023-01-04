#include "main.h"

/**
 * _pow_recursion - the value of x raised to power of y
 *
 * @x: calculated number
 * @y: power square
 *
 * Return: square
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
