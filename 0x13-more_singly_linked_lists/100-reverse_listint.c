#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - to reverse the list at linked list
 *
 * @head: pointer to the first node
 * Return: the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}
	*head = prev;
	return (*head);
}
