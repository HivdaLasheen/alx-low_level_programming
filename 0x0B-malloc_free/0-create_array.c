#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _create_array - creates an array of chars,
*  &  initializes it with a specific char.
* @size: input size.
* @c: input char.
* return : pointer to the array or NULL if it fails.

*/

char *create_array(unsigned int size, char c)
{
    /** Check if size is zero */
    if (size == 0) {
        return (NULL);
    }

    /** Allocate memory for the array */
    char *array = (char *)malloc(size * sizeof(char));

    /** Check if memory allocation is successful */
    if (array == NULL)
        {return (NULL);}

    /** Initialize the array with the specified character */
    for (unsigned int i = 0; i < size; i++){
        array[i] = c;}

    return (array);
}
