#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - to add new node
 *
 * @head: element pointer
 * @n: element name
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}
	node_new->n = n;
	node_new->next = *head;
	*head = node_new;
	return (node_new);
}

