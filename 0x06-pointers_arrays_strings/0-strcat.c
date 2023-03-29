#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int D, S;

	D = 0;
	S = 0;

	while (*(dest + D) != '\0')
		D++;

	while (*(src + S) != '\0' && D < 97)
	{
		*(dest + D) = *(src + S);
		D++;
		S++;
	}
	*(dest + D) = '\0';
	return (dest);
}
