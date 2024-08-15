#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index `index` of a `listint_t` linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    /* Handle the case where the list is empty or index is out of bounds */
    if (*head == NULL || index > listint_len(*head))
        return (-1);

    /* Handle the case where the first node is deleted */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node before the one to be deleted */
    current = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (current->next == NULL)
            return (-1);
        current = current->next;
    }

    /* Delete the node and update the links */
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
