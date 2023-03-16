#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 *			     linked list
 *
 * @head: first element
 * @index: element's number
 *
 * Return: error code
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	Sign up
		amanz25
		/
		alx-low_level_programming
		Public
		Code
		Issues
		Pull requests
		Actions
		Projects
		Security
		Insights
		alx-low_level_programming/0x17-doubly_linked_lists/8-delete_dnodeint.c
		@amanz25
		amanz25 betty format
		 1 contributor
		 40 lines (36 sloc)  648 Bytes
#include "lists.h"

		 /**
		  *  * delete_dnodeint_at_index - function that deletes the node at index index
		  *   * @head: pointer to the list head
		  *    * @index: index where the node to be deleted
		  *     *
		  *      * Return: 1 (Success) or -1 (fail)
		  *       */

		 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
		 {
			 	dlistint_t *t;

					t = *head;
						if (*head == NULL)
									return (-1);
							while (index != 0)
									{
												if (t == NULL)
																return (-1);
														t = t->next;
																index--;
																	}
								if (t == *head)
										{
													*head = t->next;
															if (*head != NULL)
																			(*head)->prev = NULL;
																}
									else
											{
														t->prev->next = t->next;
																if (t->next != NULL)
																				t->next->prev = t->prev;
																	}

										free(t);
											return (1);
		 }
