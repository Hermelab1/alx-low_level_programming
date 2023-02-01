#include "lists.h"

/**
 * list_len - the number of elements
 *
 * @h: list
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
