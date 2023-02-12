#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the given index
 *
 * @head: head of the node
 * @index: the given index to delete
 * Return: 1 for succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	node = *head;
	for (i = 0; node && i < (index - 1); i++)
	{
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
	{
		return (-1);
	}

	tmp = node->next;
	node->next = tmp->next;
	free(tmp);
	return (1);
}
