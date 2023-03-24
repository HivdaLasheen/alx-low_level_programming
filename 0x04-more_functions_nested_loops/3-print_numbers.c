#include "main.h"

/**
  * print numbers - print 0-9
  * return: void
  */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
