#include "main.h"
#define END_OF_STRING '\0'

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != END_OF_STRING; i++)
	{
		for (j = 0; accept[j] != END_OF_STRING; j++)
		{
			if (s[i] == accept[j])
				return &s[i];
		}
	}

	return NULL;
}
