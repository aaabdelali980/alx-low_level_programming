#include "main.h"
/**
 * _memset - a function thats fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(s + i) = b;
		n--;
		i++;
	}
	return (s);
}
