#include "lists.h"
#include <stdio.h>

/**
 * print_list - is used to print the element in the list
 *
 * @h: list to find
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	if (!h)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
