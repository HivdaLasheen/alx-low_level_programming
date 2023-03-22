#include "main.h"
/**
 * main - print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _putie[] = "_putchar\n";
	int i;

	for (i = 0 ; i < 11 ; i++)
	{
	_putchar(_putie[i]);
	i++;
	}
	return (0);
}
