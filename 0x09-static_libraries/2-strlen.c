#include "main.h"
/**
 * _strlen - prints length of string.
 * @s: string evaluated.
 * return : length of str.
*/
int _strlen(char *s)
{
	int length = 0;
	/** Iterate through string until null terminator*/
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
