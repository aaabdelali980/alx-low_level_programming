#include "main.h"

int test_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: input number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_sqrt_recursion(n, 0));
}
/**
 * test_sqrt_recursion - a function that recurses
 * to find the natural square root of a number
 * @n: input number
 * @i: iterator
 * Return: a square root
 */
int test_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (test_sqrt_recursion(n, i + 1));
}
