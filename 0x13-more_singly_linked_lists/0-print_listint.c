#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to print list of element
 *
 * @h: element
 * Return: node number
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return (print_listint(h->next) + 1);
}
