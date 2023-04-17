#include "main.h"
/**
 * string_topper - change all lowercase to uppercase.
 * @k: str to make upper.
 * Return : k to return value of upper
 */
char *string_toupper(char *)
{
	int c;

	for  (c = 0; k[c] != '\0'; c++)
	{
		if (k[c] >= 'a' && k[c] <= 'x')
		{
			k[c] -= 32;
		}
	}
	return (k);
}
