#include <stdio.h>
/**
  *main - file name 7-print_tebahpla.c
  *Return: Always 0.
  */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
