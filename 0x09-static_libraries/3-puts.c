#include "main.h"
/**
 * _puts - prints a string,new line, to stdout.
 * @str: pointer to str.
 * return: print str.
*/
void _puts(char *str)
{
	/** Iterate through string until null terminator.*/
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	/** Print a new line after the string.*/
	putchar('\n');
}
