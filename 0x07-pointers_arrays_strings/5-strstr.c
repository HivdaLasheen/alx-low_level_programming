#include "main.h"

/**
 * custom_strstr - locate and return pointer to first occurrence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *custom_strstr(char *haystack, char *needle)
{
	int haystack_index = 0, needle_index, match_index;

	if (needle[0] == '\0')
		return haystack;

	while (haystack[haystack_index] != '\0')
	{
		if (haystack[haystack_index] == needle[0])
		{
			match_index = haystack_index;
			needle_index = 0;

			while (needle[needle_index] != '\0' &&
			       haystack[match_index] == needle[needle_index])
			{
				match_index++;
				needle_index++;
			}

			if (needle[needle_index] == '\0')
				return haystack + haystack_index;
		}

		haystack_index++;
	}

	return NULL; /* No match */
}

