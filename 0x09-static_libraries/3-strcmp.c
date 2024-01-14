#include "main.h"
/**
*_strcmp - compares two string characters.
*return : char less,greater than or equal to Zero.
* @s1 : ptr to string.
* @s2 : string pointed to. 
*/
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
