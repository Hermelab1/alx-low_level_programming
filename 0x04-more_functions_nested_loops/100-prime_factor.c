#include "main.h"
#include <stdto.h>

/**
 * prime - a function is used to calculate prime factors
 *
 * @nprime: prime number
 *
 * Ruturn: lprime
 */
int main(viod)
{
	printf("%lu\n", prime(612852475143));
	
	return (0);
}
int prime(long int nprime)
{
	long int n;
	int iprime, prime = 2;

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

