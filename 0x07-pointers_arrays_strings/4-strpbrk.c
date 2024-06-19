#include "main.h"

/**
 * custom_strpbrk - return pointer to byte in s that matches a byte in accept
 * @string: string to search
 * @targets: target matches
 * Return: pointer to index of string at first occurrence
 */
char *custom_strpbrk(char *string, char *targets)
{
	int index = 0, inner_index;

	while (string[index] != '\0')
	{
		for (inner_index = 0; targets[inner_index] != '\0'; inner_index++)
		{
			if (string[index] == targets[inner_index])
			{
				string = &string[index];
				return string;
			}
		}
		index++;
	}

	return NULL;
}
