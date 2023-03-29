#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int D, S;

	D = 0;
	S = 0;

	while (*(dest + D) != '\0')
		D++;

	while (*(src + S) != '\0' && D < 97 && S < n)
	{
		*(dest + D) = *(src + S);
		D++;
		S++;
	}
	*(dest + D) = '\0';
	return (dest);
}
