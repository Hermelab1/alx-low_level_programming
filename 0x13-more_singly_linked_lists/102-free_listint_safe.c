#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - a function that free a list
 *
 * @h: node
 * Return: the sie of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	size_t size;

	if (h == NULL)
	{
		return (0);
	}

	size = 0;
	while (*h != NULL)
	{
		aux = *h;
		*h = (*h)->next;
		free(aux);
		size++;
	}
	*h = NULL;
	return (size);
}
