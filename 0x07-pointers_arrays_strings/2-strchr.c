#include "main.h"
#define MY_NULL 0

/**
 * find_first_occurrence - Locate the first occurrence of a character in a string and return a pointer to it.
 * @str: The string to search.
 * @target_char: The target character to find.
 * Return: Pointer to the first occurrence of `target_char` in `str`, or NULL if not found.
 */
char *find_first_occurrence(char *str, char target_char)
{
    int index = 0;

    while (str[index] != '\0' && str[index] != target_char)
        index++;

    if (str[index] == target_char)
        return (&str[index]);
    else
        return (MY_NULL);
}
