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
	if (h == NULL)
	{
		return (0);
	}
	if (h->str == NULL)
	{
		printf("[0] %s\n", "(nil)");
	}
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("[%d]%s\n", h->len, h->str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
