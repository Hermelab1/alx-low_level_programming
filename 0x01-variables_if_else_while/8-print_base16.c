#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, hexnumber = 48;
	char al;

	for (n = 0; n < 10; n++)
	{
		putchar(n + hexnumber);
	}
	
	for (al = 'a'; al <= 'f'; al++)
	{
	    putchar(al);
	}
	
	putchar('\n');

	return (0);
}
