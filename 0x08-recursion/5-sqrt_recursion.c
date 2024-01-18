#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: results , or -1 if fails.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 2));
}

/**
 * sqrt_helper - recursive helper function to find square root
 * @n: input number
 * @i: current guess for square root
 *
 * Return: natural square root of n, or -1 if not found
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
