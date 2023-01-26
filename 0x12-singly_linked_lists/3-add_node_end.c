#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - used to add new element at the end
 *
 * @head: element pointer
 * @str: element name
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
