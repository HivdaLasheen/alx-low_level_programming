#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 on invalid arguments, or 2 on negative bytes.
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *opcodes;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    opcodes = (unsigned char *)&main; 

    for (i = 0; i < bytes; i++)
    {
        printf("%.2x", opcodes[i]);
        if (i < bytes - 1)
        {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
