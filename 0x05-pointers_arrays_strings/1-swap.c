#include "main.h"

/**
 * swap_int: swap the values of two integer
 * 
 * @a: int pointers
 * @b: int pointers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
