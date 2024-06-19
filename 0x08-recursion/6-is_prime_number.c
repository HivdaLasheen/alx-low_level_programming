#include "main.h"

/**
 * check_divisibility - Checks divisibility recursively
 * @num: The number to evaluate for primality
 * @divisor: The current divisor to test
 * Return: 1 if prime, 0 otherwise
 */
int check_divisibility(int num, int divisor)
{
	if (divisor == num - 1)
		return 1;

	else if (num % divisor == 0)
		return 0;

	return check_divisibility(num, divisor + 1);
}

/**
 * is_prime_number - Checks if a number is prime
 * @num: The number to evaluate
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int num)
{
	int divisor = 2;

	if (num < 2)
		return 0;

	if (num == 2)
		return 1;

	return check_divisibility(num, divisor);
}
