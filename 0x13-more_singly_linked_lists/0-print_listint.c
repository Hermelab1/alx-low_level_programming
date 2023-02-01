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
	int node_num = 0;

	if (!h)
	{
		return (0);
	}
	printf("%d\n", h->n);
	node_num++;
	h = h->next;
	return (node_num);
}
