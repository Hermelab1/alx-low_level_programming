#include <stdio.h>
#include <stdlib.h>

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	printf("\n");

	return (0);
}
