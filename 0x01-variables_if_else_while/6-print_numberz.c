#include <stdio.h>
/**
  *main - file name 6-print_numberz.c
  *Return: Always 0.
  */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
