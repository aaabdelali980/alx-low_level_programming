#include "main.h"

int test_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that checks if a string is a palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a function that returns the length
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * test_pal - a function that checks the characters for palindrome
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 or 0
 */
int test_pal(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	if (i >= len)
		return (1);
	return (test_pal(s, i + 1, len - 1));
}
