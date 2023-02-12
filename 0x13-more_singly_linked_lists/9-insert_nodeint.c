#include "lists.h"

/**
 * insert_nodeint_at_index - to insert new node at the given possition
 *
 * @head: the head of the element
 * @idx: index of the list the new node added
 * @n: given index
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *current;
    unsigned int i;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    for (i = 0; i < (idx - 1); i++)
    {
        if (current->next == NULL)
            return (NULL);
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
    return (new_node);
}
