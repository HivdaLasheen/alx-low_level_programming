#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocates space in memory.
 * @str: input string
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);
	
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
