#include "main.h"
/**
 * string_topper - change all lowercase to uppercase.
 * @k : pointer.
 * Return : k
 */
char *string_toupper(char *)
{
	int c;

	c = 0;
	while (k[c])
	{
		if (k[c] >= 'a' && k[c] <= 'x')
			k[c] -= 32;
		c++;
	}
	return (k);
}
