#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer data for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *current;

    // 1. Create the new node
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;

    // 2. Handle an empty list
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    // 3. Find the last node in the list
    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // 4. Append the new node
    current->next = new_node;
    return (new_node);
}
