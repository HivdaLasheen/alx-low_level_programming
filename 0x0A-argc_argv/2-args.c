#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments it receives
 * Description : print all arguments received.
 * @argc : cmd Line arg count.
 * @argv : smc Line arg arr.
 *
 * Return: always(0) (Success).
*/
int main(int argc, char *argv[])
{
	int s;

	for (int s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
