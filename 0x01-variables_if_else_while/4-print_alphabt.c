#include <stdio.h>
/**
  *main - file name 4-print_alphabt.c
  *Return: Always 0.
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
