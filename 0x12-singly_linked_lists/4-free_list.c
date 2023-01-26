#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - to free the list
 *
 * @head: list pointer
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
