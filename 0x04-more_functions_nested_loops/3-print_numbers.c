#include "main.h"
/**
 * print_numbers - prints from 0 to 9 characters
 *
 * Return: void
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
