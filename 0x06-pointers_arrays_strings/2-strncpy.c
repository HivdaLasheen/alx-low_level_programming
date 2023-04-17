#include "main.h"
/**
  *  _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		*(dest + c) = *(src + c);
	for ( ; c < n; c++)
		*(dest + c) = '\0';
	return (dest);
}
