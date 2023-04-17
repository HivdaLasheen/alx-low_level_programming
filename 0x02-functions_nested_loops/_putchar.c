#include "main.h"
#include <unistd.h>

/**
 *main - file name 0-putchar.c
 *Return: Always 0.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
