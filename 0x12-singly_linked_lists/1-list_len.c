#include "lists.h"

/**
 * list_len - the number of elements
 *
 * @h: list
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
