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
	int i = 0;

	while (argc--)
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
