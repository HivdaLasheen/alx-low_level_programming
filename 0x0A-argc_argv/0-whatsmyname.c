#include <stdio.h>
/**
 * main - prints file name
 * @argc: first parameter
 *
 * @argv: second parameter
 * program that prints its name
 * 
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
    {
       
        for (int i = 0; argv[0][i] != '\0'; i++)
        {
            putchar(argv[0][i]);
        }

        
        putchar('\n');
    }

    return (0);
}
