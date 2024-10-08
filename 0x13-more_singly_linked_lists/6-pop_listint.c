#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n).
 *         0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (*head == NULL)
        return (0);

    temp = *head;
    n = (*head)->n;
    *head = (*head)->next;
    free(temp);

    return (n);
}
