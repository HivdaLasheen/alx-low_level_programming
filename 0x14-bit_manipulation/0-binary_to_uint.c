#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int ui = 0;

    if (!b) 
        return 0;

    while (*b) 
    {
        if (*b != '0' && *b != '1')
            return 0; 

        ui <<= 1; // Left shift to make space for the new bit
        ui += *b - '0'; // Add the new bit (0 or 1)
        b++;
    }

    return ui;
}
