#include "main.h"

/**
 * custom_strstr - locate and return pointer to first occurrence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurrence of whole substring
 */
char *custom_strstr(char *haystack, char *needle)
{
	int index = 0, inner_index, start_index;

	if (needle[0] == '\0')
		return haystack;

	while (haystack[index] != '\0')
	{
		if (haystack[index] == needle[0])
		{
			start_index = index;
			inner_index = 0;

			while (needle[inner_index] != '\0' && haystack[start_index] == needle[inner_index])
			{
				start_index++;
				inner_index++;
			}

			if (needle[inner_index] == '\0')
				return haystack + index;
		}

		index++;
	}

	return NULL; /* No match */
}
