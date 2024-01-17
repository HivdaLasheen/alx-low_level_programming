#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments.
 * @argc: first parameter.
 * @argv: second parameter.
 * Return: Always (0) (Success).
*/
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		*argv[counter] = *argv[counter];
	}
	printf("%d\n", (counter - 1));
	return (0);
}
