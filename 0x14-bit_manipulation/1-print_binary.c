#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1); // Start with the most significant bit

    while (mask > 0)
    {
        _putchar((n & mask) ? '1' : '0'); // Check if the bit is set and print accordingly
        mask >>= 1; // Shift the mask to the right to check the next bit
    }
}
