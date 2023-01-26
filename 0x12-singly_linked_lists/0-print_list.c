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
	if (h->srt == NULL)
	{
		printf("[0] %s\n", "(nil)");
	}
	size_t num_nodes = 0;
	list_t *tmp = h;

	while (tmp != NULL)
	{
		printf("[%d]%s\n", tmp->len, tmp->str);
		num_nodes++;
		tmp = tmp->next;
	}
	return (num_nodes);
}
