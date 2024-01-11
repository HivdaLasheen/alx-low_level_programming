#include "main.h"
/**
 * _sqrt_recursion : returns natural square.
 * @n: has no natural square root.
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/** If n is negative, return -1 as it doesn't have a natural square root */
		return (-1);
	}
	else 
	{
	return _sqrt_recursion (n, 0, n);
	}
}
