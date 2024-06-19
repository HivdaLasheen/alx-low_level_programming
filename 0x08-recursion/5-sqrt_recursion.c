#include "main.h"

/**
 * find_square_root - Finds the square root of a number recursively
 * @num: The number for which to find the square root
 * @test: The number to test as a potential square root of @num
 * Return: The square root of @num if found, otherwise -1
 */
int find_square_root(int num, int test)
{
	if (test * test > num)
		return (-1);
	else if (test * test == num)
		return (test);
	else
		return (find_square_root(num, test + 1));

	return (1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_square_root(n, 1));
}
