#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - to print a lists in the linked list
 *
 * @head: the head of the node
 * Return: the number of the node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *marker = head;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
		if (marker <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			count++;
			break;
		}
	}

	exit(98);
	return (count);
}
