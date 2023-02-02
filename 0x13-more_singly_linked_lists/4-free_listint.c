#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 *
 * @head: pointer to head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
