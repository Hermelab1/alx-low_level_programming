#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - to add the data in the list
 *
 * @head: element pointer
 * Return: the sum;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
