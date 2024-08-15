#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    int diff;
    listint_t *temp;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h)
    {
        diff = *h - (*h)->next;
        if (diff > 0)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
            len++;
        }
        else
        {
            free(*h);
            *h = NULL;
            len++;
            break;
        }
    }

    *h = NULL;

    return (len);
}
