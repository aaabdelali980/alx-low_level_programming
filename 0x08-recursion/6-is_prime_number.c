#include "main.h"

int test_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime(n, n - 1));
}

/**
 * test_prime - a function that tests if a number is prime
 * @n: input number
 * @i: iterator
 * Return: 1 or 0
 */

int test_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (test_prime(n, i - 1));
}
