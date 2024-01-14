#include <stdio.h>
#include "main.h"
/**
 * _strcpy-string pointed to by src, incld null.
 * @dest : string to be pointed to.
 * @O : pointer.
 * return : pointer to dest.
*/ 
char *_strcpy(char *dest, const char *src)
{
	/** CP char src to dest to null. */
	char *Orig = dest;
	/** CP char & mv nxt position in both source and dest.*/
	while ((*dest++ = *src++) != '\0')
		/** Return ptr to the begin of dest str. */
		return (Orig);
}
