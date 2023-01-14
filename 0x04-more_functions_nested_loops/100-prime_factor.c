#include <stdio.h>

/**
 * prime - a function is used to calculate prime factors
 *
 * @nprime: prime number
 *
 * Return: largest prime factor (iprime)
 */
long int prime(long int nprime)
{
	long int n;
	int iprime;
	int prime = 2;

	n = nprime;

	while (n != 0)
	{
		if (n % prime == 0)
		{
			iprime = n;
			n /= prime;

			if (n == 1)
			{
				break;
			}
		}
		else
		{
			prime += 1;
		}
	}

	return (iprime);
}

/**
 * main - to check the prime factore function
 *
 * Return: always 0
 */
int main (void)
{
	printf("%lu\n", prime(612852475143));

	return (0);
}
