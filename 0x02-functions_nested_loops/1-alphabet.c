#include <stdio.h>
#include "main.h"
/**
  *main - Entry point
  *Description: print the alphabet
  *Return: Always 0
  */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
{

