#include "main.h"
/**
 * *create_array - creates an array of chars,
 *  initializes it with a specific char.
 * @size: input size.
 * @c: input char.
 * return : pointer toarray or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
