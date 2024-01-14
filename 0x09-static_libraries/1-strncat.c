#include "main.h"
/**
 * */
char *_strncat(char *dest, const char *src, int n)
{
	char *OD = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (OD);
}
