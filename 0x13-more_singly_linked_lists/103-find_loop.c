#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - to find a loop in the list
 *
 * @head: head of the node
 * Return: the address of the node where the loop is start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (slow);
		}
	}

	return (NULL);
}
