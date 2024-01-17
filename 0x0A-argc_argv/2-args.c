#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments
 * Description : print all arguments received.
 * @argc : cmd Line arg count.
 * @argv : smc Line arg arr.
 * Return : Always 0 (Success).
*/
int main(int argc, char *argv[])
{
	int s;

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
