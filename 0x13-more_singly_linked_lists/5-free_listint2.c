#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - to free list
 *
 * @head: list pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
