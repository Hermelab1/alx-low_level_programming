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

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
