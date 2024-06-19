#include "main.h"

/**
 * check_palindrome - checks the string for palindrome
 * @str: the string to be checked
 * @length: the length of the string
 * @index: the incrementor, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int check_palindrome(char *str, int length, int index)
{
    if (index < length && str[index] == str[length])
        return (check_palindrome(str, length - 1, index + 1));
    if (str[index] != str[length])
        return (0);
    return (1);
}

/**
 * get_string_length - returns the length of a string
 * @str: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int get_string_length(char *str)
{
    if (*str != '\0')
        return (1 + get_string_length(str + 1));
    return (0);
}

/**
 * is_palindrome - checks to see if a string is a palindrome
 * @str: the string to check
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int is_palindrome(char *str)
{
    int index = 0;
    int length = get_string_length(str) - 1;

    return (check_palindrome(str, length, index));
}
