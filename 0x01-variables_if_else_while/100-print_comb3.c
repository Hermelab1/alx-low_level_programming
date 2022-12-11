#include <stdio.h>
#include <stdlib.h>

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, m, right, left;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			right = n * 10 + m;
			left = m * 10 + n;

			if (right < left)
			{
				putchar(n + 48);
				putchar(m + 48);

				if (n * 10 + m != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
