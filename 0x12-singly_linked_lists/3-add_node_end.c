#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the first element of the list.
 * @str: String to set in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *dup_str;
    size_t len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    for (len = 0; dup_str[len] != '\0'; len++)
        ;

    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}
