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
	int count = 0;

	while (argv[count] != NULL)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
