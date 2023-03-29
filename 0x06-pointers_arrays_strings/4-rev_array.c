#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int print, reverse, finish;

	print = 0;
	finish = n - 1;
	while (print < finish)
	{
		reverse = *(a + print);
		*(a + print) = *(a + finish);
		*(a + finish) = reverse;
		print++;
		finish--;
	}
}
