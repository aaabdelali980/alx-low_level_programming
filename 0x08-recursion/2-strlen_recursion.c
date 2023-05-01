#include "main.h"
/**
 * _strlen_recursion - a function that return the length of a string
 * @s: input
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
