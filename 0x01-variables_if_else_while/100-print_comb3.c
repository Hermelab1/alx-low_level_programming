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

	for (n = 1; n < 90; n++)
	{
		printf("%02d",n);

		if (n < 89)
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	
	putchar('\n');

	return (0);
}
