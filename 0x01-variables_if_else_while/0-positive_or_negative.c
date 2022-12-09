#include <stdio.h>
#include <time.h>

/**
 * main - starting of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
