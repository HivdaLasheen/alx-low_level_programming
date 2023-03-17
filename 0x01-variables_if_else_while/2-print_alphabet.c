#include <stdio.h>
/**
  *main - file name 1-last_digit.c
  *Return: Always 0.
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
