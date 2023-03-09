#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 0 and 1 are not prime numbers */
	return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function to check if a number is prime
 * @n: the number to check
 * @div: the divisor to check if n is divisible by
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (n % div == 0) /* if n is divisible by div, it's not a prime number */
	return (0);

	if (div == n - 1) /* if we've checked all possible divisors, n is prime */
	return (1);

	return (is_prime_helper(n, div + 1));
}
