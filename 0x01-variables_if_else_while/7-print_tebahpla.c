#include <stdio.h>
#include <stdlib.h>

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
