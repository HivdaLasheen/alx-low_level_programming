#include "main.h"
/**
 * _strcat - append src str to dest str.
 * (\0) null at end overwrit
 * adds terminating null.
 * @i: original destination ptr.
 * @src: to be concatenated
 * @dest: destination.
 * return: dest.
*/
char *_strcat(char *dest, const char *src)
{
	char *i = dest;
	/** Save orignal dest ptr */
	/** mv dest ptr to dest str. */
	while (*dest)
	{
		dest++;
	}
	/** CP chars & '\0' from src to dest*/
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	/** Add the null terminator end of str */
	*dest = '\0';
	/** Return the original dest ptr */
	return (i);  
}
