#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument array.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
