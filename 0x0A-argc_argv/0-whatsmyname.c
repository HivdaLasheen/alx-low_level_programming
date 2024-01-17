#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints file name
 * @argc: first parameter.
 * @argv: second parameter.
 * program that prints its name
 * Return: Always(0) Success
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		char *currentArg = *argv++;

		while (*currentArg)
		{
			putchar(*currentArg++);
		}
		putchar('\n');
	}
	return (0);
}
