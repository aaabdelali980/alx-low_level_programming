#include "main.h"
/**
 * _strpbrk - a function that locates the first occurrence
 * @s: input
 * @accept: input
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
