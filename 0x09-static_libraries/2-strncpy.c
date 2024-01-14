#include "main.h"
/**
 * _strncpy - cp str from src to dest
 * @dest : destination of str copies
 * @src : source of str 
 * @n : max no. of integers to cp
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *AOD = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (AOD);
}
