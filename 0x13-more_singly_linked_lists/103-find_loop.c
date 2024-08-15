#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    /* Traverse the list with two pointers, one moving twice as fast */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* If the pointers meet, there's a loop */
        if (slow == fast)
        {
            /* Reset slow to the head and move both pointers at the same pace */
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            /* When they meet again, that's the start of the loop */
            return (slow);
        }
    }

    return (NULL); /* No loop found */
}
