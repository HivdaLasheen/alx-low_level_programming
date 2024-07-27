#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;
    size_t len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

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
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
