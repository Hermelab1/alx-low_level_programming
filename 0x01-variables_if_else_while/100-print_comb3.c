#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		printf("%02d",n);

		if (n < 100)
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	
	putchar('\n');

	return (0);
}
